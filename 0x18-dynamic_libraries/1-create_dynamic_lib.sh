#!/bin/bash

# Compile all .c files into position-independent code
# and create the dynamic library
gcc -Wall -pedantic -Werror -Wextra -std=gnu89
gcc -shared -fPIC -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
