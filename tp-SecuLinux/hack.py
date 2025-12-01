import subprocess
import os
import time
import statistics
import sys

# Configuration
VULN_PATH = "./step1/vuln1"
TEST_SCRIPT_PATH = "test_vuln_1.py"
NB_ITERATIONS = 100  # Nombre de fois qu'on lance le test pour les stats

def get_maps_address(pid):
    """Récupère les 8 premiers chars de la dernière ligne de maps."""
    try:
        with open(f"/proc/{pid}/maps", "r") as f:
            lines = f.readlines()
            if not lines:
                return None
            last_line = lines[-1]
            # On prend les 8 premiers caractères
            hex_str = last_line[:8]
            return int(hex_str, 16)
    except FileNotFoundError:
        print(f"[!] Process {pid} introuvable ou déjà terminé.")
        return None
    except Exception as e:
        print(f"[!] Erreur lecture maps: {e}")
        return None

def get_dmesg_address():
    """Récupère 16 chars après le dernier 'sp' dans dmesg | tail."""
    try:
        # Exécute dmesg | tail
        cmd = "dmesg | tail"
        output = subprocess.check_output(cmd, shell=True).decode('utf-8')
        
        # Trouve la dernière occurrence de "sp"
        last_sp_index = output.rfind("sp")
        
        if last_sp_index == -1:
            print("[!] 'sp' non trouvé dans dmesg.")
            return None
            
        # Le prompt demande les 16 caractères qui SUIVENT la chaîne "sp"
        # On assume que c'est immédiatement après (index + longueur de "sp")
        start_index = last_sp_index + 2 
        hex_str = output[start_index : start_index + 17]
        
        # Nettoyage au cas où il y a des espaces ou ':' (optionnel, selon ton format exact)
        # Ici je respecte strictement la demande "les 16 caractères qui suivent"
        clean_hex = hex_str.strip().replace(':', '') 
        
        # Si le format contient des espaces ou :, il faudra peut-être ajuster la découpe
        # Pour ce script, j'essaie de convertir ce qui a été extrait
        return int(clean_hex, 16)
        
    except ValueError:
        print(f"[!] Impossible de convertir '{hex_str}' en hexa.")
        return None
    except Exception as e:
        print(f"[!] Erreur dmesg: {e}")
        return None

def main():
    differences = []

    print(f"[*] Démarrage de {NB_ITERATIONS} itérations...")

    for i in range(NB_ITERATIONS):
        # 1. Lancer vuln1 dans un processus enfant (fork/exec via Popen)
        try:
            proc = subprocess.Popen([VULN_PATH], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        except FileNotFoundError:
            print(f"[!] Erreur : Le fichier {VULN_PATH} n'existe pas.")
            sys.exit(1)

        pid = proc.pid
        
        # Petite pause pour laisser le temps au process de s'initialiser
        time.sleep(0.1) 

        # 2. Récupérer l'adresse dans /proc/pid/maps
        addr_maps = get_maps_address(pid)
	

        # 3. Exécuter le script de test python
        subprocess.run(["python2", TEST_SCRIPT_PATH], stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        
        # Pause pour laisser le kernel logger (dmesg)
        time.sleep(0.5)

        # 4. Lire dmesg
        addr_dmesg = get_dmesg_address()

        # Nettoyage du processus vuln1
        proc.kill()
        proc.wait()

        # 5. Calcul de la différence
        if addr_maps is not None and addr_dmesg is not None:
            diff = addr_dmesg - addr_maps
            differences.append(diff)
            print(f"[{i+1}] Maps: {hex(addr_maps)} | Dmesg: {hex(addr_dmesg)} | Diff: {hex(diff)}")
        else:
            print(f"[{i+1}] Échec de récupération des données.")

    # 6. Statistiques
    if differences:
        moyenne = statistics.mean(differences)
        try:
            ecart_type = statistics.stdev(differences)
        except statistics.StatisticsError:
            ecart_type = 0.0 # Si une seule valeur

        print("-" * 40)
        print(f"Résultats sur {len(differences)} succès :")
        print(f"Moyenne (Dec)    : {moyenne}")
        print(f"Moyenne (Hex)    : {hex(int(moyenne))}")
        print(f"Écart-type       : {ecart_type:.2f}")
    else:
        print("Aucune donnée collectée.")

if __name__ == "__main__":
    # Vérification simple si on est root (souvent nécessaire pour dmesg)
    if os.geteuid() != 0:
        print("[Warning] Ce script pourrait nécessiter 'sudo' pour lire dmesg ou /proc.")
    
    main()
