#!/bin/bash
gcc -Wall -Werror -c *.c -fpic
gcc *.o -shared -o liball.so 