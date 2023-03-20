#!/bin/bash
wget -P .. https://github.com/Ambesawi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lottery.s
export LD_PRELOAD="$PWD/../lottery.so
