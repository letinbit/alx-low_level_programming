#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 ./*.c
ar rcs liball.a ./*.o
nm liball.a
