#!/bin/bash

# Create a static library called liball.a from all the .c files
# in the current directory

# Compile each .c file into a .o file
gcc -c *.c

# Create a static library
ar rc liball.a *.o

# Add an index to the library
ranlib liball.a
