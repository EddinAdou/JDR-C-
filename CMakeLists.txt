cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        Pièce.cpp
        Pièce.h
        Logger.cpp
        Logger.h
        Dé.cpp
        Dé.h
        DeckDeCartes.cpp
        DeckDeCartes.h
        GameMaster.cpp
        GameMaster.h)
