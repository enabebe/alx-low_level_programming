#!/bin/bash
wget -P .. https://raw.githubusercontent.com/monoprosito/holbertonschool-low_level_programming/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD="$PWD/../liball.so"
