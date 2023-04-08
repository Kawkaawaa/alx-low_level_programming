#!/bin/bash
#create a create_static_lib.sh 
#create an object file for each .c file in the current directory
C_FILES=$(find . -maxdepth 1 -type f -name "*.c")
#create a static library from all the object files
ar rcs liball.a $(for file in $C_FILES; do gcc -c $file; echo ${file%.c}.o; done)
