#!/bin/bash
gcc -c -fPIC -Werror -Wextra *.c
gcc -shared liball.so *.o
