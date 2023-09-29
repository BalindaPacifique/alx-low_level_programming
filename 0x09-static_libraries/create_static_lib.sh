#!/bin/bash
gcc -Wall -pedantic -Werror -Wall -c *.c
ar -rc liball.a *.o
ranlib liball.a
