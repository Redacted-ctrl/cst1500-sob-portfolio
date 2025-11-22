#!/bin/bash


# This checks if three parameters are provided if not it prints an error and exits
# so if the number of arguments is not equal to 3 we have an error
if [ "$#" -ne 3 ]; then
    echo "Error: Three parameters are required: path, x (folders), and y (files)."
    exit 1
fi

# I then assigned each of the script’s input parameters to named variables
path="$1"
num_folders="$2"
num_files="$3"

# I then Check if num_folders and num_files are within the range 1 to 20
if [[ $num_folders -le 0 || $num_folders -gt 20 || $num_files -le 0 || $num_files -gt 20 ]]; then
    echo "Error: Folder and file counts must be between 1 and 20."
    exit 1
fi

# This Checks if the path exists if not the user needs to create it
if [ ! -d "$path" ]; then
    echo "Directory '$path' does not exist. Creating it now..."
    mkdir -p "$path"
else
    echo "Directory '$path' already exists."
fi
# this is my outer loop that creates the number of folders
for i in $(seq 1 "$num_folders"); do
    folder_path="$path/folder_$i"
    mkdir -p "$folder_path" && echo "Created folder: $folder_path"
    
    # This inner loop creates the specified number of files in each folder
    for j in $(seq 1 "$num_files"); do
        file_path="$folder_path/file_$j.txt"
        touch "$file_path"
        echo "Created file: $file_path"
    done
done

echo "Task completed: Created $num_folders folders, each with $num_files .txt files."