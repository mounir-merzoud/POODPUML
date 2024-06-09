cmake_minimum_required(VERSION 3.10)
project(towerDefense VERSION 0.1.0 LANGUAGES C CXX)

set(SFML_DIR "C:/Users/kamil/SFML-2.6.1-windows-gcc-13.1.0-mingw-64-bit/SFML-2.6.1/lib/cmake/SFMLL")


find_package(SFML 2.6.1 COMPONENTS graphics audio REQUIRED)

include_directories(${SFML_INCLUDE_DIR} src include)

add_executable(towerDefense
    main.cpp
    src/Menu.cpp
    src/Shope.cpp
    src/GameObject.cpp
    src/Monster.cpp
    src/Tower.cpp
    src/Animation.cpp
    src/GameObjectFactory.cpp
    src/Weapon.cpp
    src/Projectile.cpp
    src/CollisionHandler.cpp
    src/WaveManager.cpp
    src/GameData.cpp
)

target_include_directories(towerDefense PRIVATE ${SFML_INCLUDE_DIR} src)

target_link_libraries(towerDefense sfml-graphics sfml-audio)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)