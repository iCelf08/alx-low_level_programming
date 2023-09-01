#!/bin/bash
gcc -wall -pedantic _werror -wextra -c *.c
ar -rcs liball.a *.o
ranlib liball.a
