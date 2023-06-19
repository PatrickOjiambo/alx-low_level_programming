#!/bin/bash

# Get all the .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into its corresponding object file
for c_file in $c_files; do
    gcc -c -fPIC "$c_file" -o "${c_file%.c}.o"
done

# Create the dynamic library by linking all the object files
gcc -shared *.o -o liball.so

# Clean up the object files
rm -f *.o
