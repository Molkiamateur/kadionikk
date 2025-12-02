#!/bin/bash
set -euo pipefail

usage() {
    echo "Usage: $0 [framerate]"
    echo "Example: $0 24"
    exit 1
}

FPS="${1:-30}"

# validation: entier positif
if ! [[ "$FPS" =~ ^[0-9]+$ ]] || [ "$FPS" -le 0 ]; then
    echo "Framerate invalide: $FPS" >&2
    usage
fi

cd data || { echo "Répertoire data introuvable" >&2; exit 1; }
ffmpeg -framerate "$FPS" -i gen%04d.pbm -c:v libx264 -pix_fmt yuv420p game_of_life.mp4
echo "Video created: game_of_life.mp4 (framerate: $FPS)"
rm -f gen*.pbm
cd ..
mv -f data/game_of_life.mp4 .
