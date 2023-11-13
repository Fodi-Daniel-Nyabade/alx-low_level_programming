#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Fodi-Daniel-Nyabade/alx-low_level_programming/master/0x18-dynamic_libraries/libhack.so
export LD-PRELOAD="$PWD/../libhack.so"
