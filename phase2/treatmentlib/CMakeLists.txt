cmake_minimum_required(VERSION 2.8)
project(MyLib)

# Dossier des fichiers d'entête
include_directories(include)

# Liste des fichiers d'implémentation
file(GLOB sources src/*)

# Génération de la librairie dynamique à partir des sources
add_library(traitement STATIC ${sources}) # STATIC pour une librairie statique

# Définition du dossier d'installatoin de la librairie
install(TARGETS traitement DESTINATION /usr/lib)
install(FILES add.h cpstd.h debug.h DESTINATION /usr/include)