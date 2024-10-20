cmake_minimum_required(VERSION 3.10)
project(MyGame)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES
    main.cpp
    Game.cpp
    Player.cpp
    Window.cpp
)

include_directories(.)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(my_game ${SOURCES})

target_link_libraries(my_game sfml-graphics sfml-window sfml-system)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
