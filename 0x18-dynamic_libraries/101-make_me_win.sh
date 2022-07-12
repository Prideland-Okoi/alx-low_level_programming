#!/bin/bash
wget -P /tmp/ https://github.com/prideland-okoi/alx-low_level_programming/master/0x18-dynamic_libraries
export LD_PRELOAD=tmp/nrandom.so
