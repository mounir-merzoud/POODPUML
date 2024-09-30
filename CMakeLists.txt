cmake_minimum_required(VERSION 3.10)
project(towerDefense VERSION 0.1.0 LANGUAGES C CXX)

include_directories(${SFML_INCLUDE_DIR} src include)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(towerDefense
    main.cpp
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
    src/Display.cpp
    src/GameManager.cpp
    src/Menu.cpp
)

target_include_directories(towerDefense PRIVATE ${SFML_INCLUDE_DIR} src)

target_link_libraries(towerDefense sfml-graphics sfml-audio)

include(CTest)
enable_testing()

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)