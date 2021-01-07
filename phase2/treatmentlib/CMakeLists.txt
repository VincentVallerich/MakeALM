cmake_minimum_required(VERSION 2.8) 
project(ConcatenationLib) 

# Dossier des fichiers d'entête 
include_directories(include) 

# Liste des fichiers d'implémentation 
file(GLOB sources src/*) 

# Génération de la librairie dynamique à partir des sources 
add_library(concatenation STATIC ${sources}) # STATIC pour une librairie statique

# Définition du dossier d'installatoin de la librairie 
install(TARGETS concatenation DESTINATION /usr/lib) 
install(FILES concat.h DESTINATION /usr/include)