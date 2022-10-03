#!/bin/bash
wget -P /tmp https://github.com/KilungyaJr/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgigamil.so
export LD_PRELOAD=/tmp/libgigamil.so
