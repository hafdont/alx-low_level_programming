#!/bin/bash 

#Compile 'em files into object files

gcc -Wall -Werror -Wextra -pedantic -c *.c

ar rcs liball.a *.o
