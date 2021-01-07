cmake_minimum_required(VERSION 2.8)
project(MyLib)

# Dossier des fichiers d'entête
include_directories(include ~app/include)

# Dossier des librairies 
link_directories(~/Windows/Users/lesis/Documents/ENSISA/2A/Semestre\ 1/Adéquation\ Logiciel\ Matériel/TP/tp1/phase2/treatmentlib/build)

# Liste des fichiers d'implémentation
file(GLOB sources src/*)

add_executable(traitement ${sources}) 
target_link_libraries(traitement libtraitement.a)

