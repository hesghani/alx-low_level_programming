#!/bin/bash

# Compile all .c files in the current directory and create object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a from the object files
ar rc liball.a *.o

# Index the static library
ranlib liball.a

# Clean up the object files (optional)
rm *.o

echo "Static library liball.a has been created."
