#!/bin/bash
wget -o /tmp https://github.com/Ambesawi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/lottery.so
export LD_PRELOAD=/tmp/lottery.so
