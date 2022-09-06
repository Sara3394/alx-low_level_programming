#!/bin/bash
wget -q -O /run/jackpot.so https://github.com/Sara3394/alx-low_level_programming/0x18-dynamic_libraries/jackpot.so
export LD_PRELOAD=/run/jackpot.so
