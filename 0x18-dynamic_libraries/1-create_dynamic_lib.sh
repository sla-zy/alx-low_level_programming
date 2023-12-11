#!/bin/bash
gcc -Wall -Wextra -Werror -Pedantic -c -FPIC *.C
gcc -shared -o libdynamic.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
