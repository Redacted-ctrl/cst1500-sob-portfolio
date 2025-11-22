#!/bin/bash

# this Checks if the directory is provided as an argument if not it asks user to provied a path
if [ -z "$1" ]; then
  echo "Please provide an existing directory path as an argument."
  exit 1
fi


# This is to check if the provided directory exists
if [ ! -d "$1" ]; then
  echo "The provided directory does not exist. Please provide a valid directory."
  exit 1
fi

# I then created folders 'a', 'b', and 'c' inside the target directory
mkdir -p "$1/a" "$1/b" "$1/c"

# I then Stored my MDX username in 'userName.txt' inside folder 'a'
echo "MD1571" > "$1/a/userName.txt"

# I then Stored my favorite movie TRON in 'myFavMovie.txt' inside folder 'b'
echo "TRON" > "$1/b/myFavMovie.txt"

# Finally I moved folders 'a' and 'b' into folder 'c'
mv "$1/a" "$1/b" "$1/c"

# This prints a message indicating that the tasks were completed
echo "Folders 'a' and 'b' have been created and moved into folder 'c' with their respective files."