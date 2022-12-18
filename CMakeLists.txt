cmake_minimum_required(VERSION 3.23)
project(console_casino)

set(CMAKE_CXX_STANDARD 14)

add_executable(console_casino main.cpp headers/CanvasManager.h utils/CanvasManipulator.cpp headers/MenuManager.h menus/MainMenu.cpp)
