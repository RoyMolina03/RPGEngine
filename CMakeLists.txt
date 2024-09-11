cmake_minimum_required(VERSION 3.26)
project(RPGEngine)

set(CMAKE_CXX_STANDARD 17)

add_executable(RPGEngine main.cpp
        Player/Health.cpp
        Player/Health.h
        Player/Magic.cpp
        Player/Magic.h
        Player/Player.cpp
        Player/Player.h
        Player/Stats.cpp
        Player/Stats.h
        Util/Combat.cpp
        Util/Combat.h
        Util/Inventory.cpp
        Util/Inventory.h
        Util/Equipment.cpp
        Util/Equipment.h
        Util/Item.cpp
        Util/Item.h
        Util/Weapon.cpp
        Util/Weapon.h)
