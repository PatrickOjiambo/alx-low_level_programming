#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into an object file
object_files=""
for file in $c_files; do
    object_file=$(basename "$file" .c).o
    gcc -c -fPIC "$file" -o "$object_file"
    object_files+=" $object_file"
done

# Create the dynamic library
gcc -shared -o liball.so $object_files

# Clean up the object files
rm $object_files

