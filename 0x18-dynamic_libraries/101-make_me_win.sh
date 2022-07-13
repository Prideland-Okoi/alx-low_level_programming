#!/bin/bash
wget -P /tmp/ https://github.com/prideland-okoi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/wincall.so
export LD_PRELOAD=/tmp/wincall.so
