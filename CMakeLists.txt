cmake_minimum_required(VERSION 3.10)
project(towerDefense VERSION 0.1.0 LANGUAGES CXX)

# Spécifier le chemin vers les bibliothèques SFML
set(SFML_DIR "C:/Users/kamil/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/cmake/SFML")
find_package(SFML 2.6.1 COMPONENTS graphics audio REQUIRED)

# Ajouter les fichiers source de votre projet
add_executable(towerDefense main.cpp tinyxml/Map.hpp)

# Inclure le répertoire contenant les en-têtes de Tmxlite
target_include_directories(towerDefense PRIVATE tinyxml)

# Lier les bibliothèques SFML
target_link_libraries(towerDefense sfml-graphics sfml-audio)

# Configuration des tests
include(CTest)
enable_testing()

# Configuration du packaging
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
