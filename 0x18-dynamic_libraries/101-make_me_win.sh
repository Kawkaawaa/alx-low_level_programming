#!bin/bash
wget -P /tmp https://github.com/Kawkaawaa/alx-low_level_programong/raw/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
