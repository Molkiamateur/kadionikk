#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

int main(argc,argv)
     int argc ;
     char *argv[] ;

{
  int sd;
  struct sockaddr_in sa;		/* Structure Internet sockaddr_in */
  struct hostent *hptr ; 		/* Infos sur le serveur */

  char *serveur ;        		/* Nom du serveur distant */
  int port;

  char* buf ;        		/* Buffer de reception */
  char ret;
  int n, i;


  /* verification du nombre d'arguments de la ligne de commande */
  if (argc != 4) {
    printf("myclientP. Erreur d'arguments\n");
    printf("Syntaxe : %% myclient nom_serveur numero_port\n");
    exit(1);
  }

  /* Recuperation nom du serveur */
  serveur = argv[1];

  /* Recuperation numero de port */
  port = atoi(argv[2]);
	
  /* Recuperation du buf */
  buf = argv[3];

  /* Recuperation des infos sur le serveur dans /etc/hosts pour par DNS */
  if((hptr = gethostbyname(serveur)) == NULL) {
    printf("Probleme de recuperation d'infos sur le serveur\n");
    exit(1);
  }

  /* Initialisation la structure sockaddr sa avec les infos  formattees : */
  /* bcopy(void *source, void *destination, size_t taille); 		*/
  bcopy((char *)hptr->h_addr, (char*)&sa.sin_addr, hptr->h_length);

  /* Famille d'adresse : AF_INET ici */
  sa.sin_family = hptr->h_addrtype;


  /* Initialisation du numero du port */
  sa.sin_port = htons(port);

  sd = socket(AF_INET, SOCK_STREAM, 0);
  connect(sd, (struct sockaddr *) &sa, sizeof(sa));

  printf("buf : %s, buf[0] : %d\n", buf, *buf - '0');
  write(sd, buf, 2);
  read(sd, buf, 1);

  close(sd);
  
  printf("buf : %s\n", buf);
  if(*buf == "1"){
    printf("Error : Invalid command\n");
    exit(1);
  }

  exit(0);
}
