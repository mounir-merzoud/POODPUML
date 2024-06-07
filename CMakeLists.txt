cmake_minimum_required(VERSION 3.10)
project(towerDefense VERSION 0.1.0 LANGUAGES CXX)

# Spécifier le chemin vers les bibliothèques SFML
set(SFML_DIR "C:/Users/kamil/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/cmake/SFML")
find_package(SFML 2.6.1 COMPONENTS graphics audio REQUIRED)

# Spécifier le chemin vers les fichiers d'en-tête
include_directories(${SFML_INCLUDE_DIR} src include)

# Ajouter les fichiers source de votre projet
add_executable(towerDefense main.cpp src/Menu.cpp src/Shope.cpp)

# Inclure les répertoires contenant les en-têtes
target_include_directories(towerDefense PRIVATE ${SFML_INCLUDE_DIR} src)

# Lier les bibliothèques SFML
target_link_libraries(towerDefense sfml-graphics sfml-audio)
