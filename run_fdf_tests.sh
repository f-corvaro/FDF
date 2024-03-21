#!/bin/bash

# ASCII Art
echo -e "\033[1;35m"
cat << "EOF"
__/\\\\\\\\\\\\\\\__/\\\\\\\\\\\\_____/\\\\\\\\\\\\\\\_
 _\/\\\///////////__\/\\\////////\\\__\/\\\///////////__
  _\/\\\_____________\/\\\______\//\\\_\/\\\_____________
   _\/\\\\\\\\\\\_____\/\\\_______\/\\\_\/\\\\\\\\\\\_____
    _\/\\\///////______\/\\\_______\/\\\_\/\\\///////______
     _\/\\\_____________\/\\\_______\/\\\_\/\\\_____________
      _\/\\\_____________\/\\\_______/\\\__\/\\\_____________
       _\/\\\_____________\/\\\\\\\\\\\\/___\/\\\_____________
        _\///______________\////////////_____\///______________
EOF

echo -e "\033[0m"

# Author
echo -e "\033[1;33mAuthor: fcorvaro\033[0m\n"

# Path to the fdf executable
EXE="./fdf"

# Ask the user for the directory where the map files are located
echo -e "\033[1;35mPlease enter the path to the directory containing the map files (default is ./maps):\033[0m"
read MAPS_DIR


# If the user didn't provide a path, use a default value
if [ -z "$MAPS_DIR" ]; then
	MAPS_DIR="./maps"
fi

# Determine the operating system
OS=$(uname)

# Get the total number of maps
TOTAL_MAPS=$(ls -1 $MAPS_DIR/* | wc -l)

# Initialize a counter for the current map number
CURRENT_MAP=1

# Loop over all files in the MAPS_DIR directory
for MAP_FILE in $MAPS_DIR/*
do
	echo -e "\033[33m======================================\033[0m"
	echo -e "\033[33mFFFFF  DDDD  FFFFF\nF      D   D F\nFFFF   D   D FFFF\nF      D   D F\nF      DDDD  F\033[0m"
	echo -e "\033[33m======================================\033[0m"

	# Print a message indicating which map is currently being processed and how many maps are left
	echo -e "\033[1mRunning $EXE with map $MAP_FILE (map \033[31m$CURRENT_MAP\033[0m of \033[31m$TOTAL_MAPS\033[0m)\033[0m"

	# If the operating system is Linux, use Valgrind to check for memory leaks
	if [ "$OS" == "Linux" ]; then
		valgrind --track-fds=all --leak-check=full --track-origins=yes --show-leak-kinds=all -s $EXE "$MAP_FILE"
	# If the operating system is Darwin (macOS), use the leaks command to check for memory leaks
	elif [ "$OS" == "Darwin" ]; then
		$EXE "$MAP_FILE" &
		EXE_PID=$!
		sleep 1 # give the program a moment to start
		leaks $EXE_PID
		wait $EXE_PID # wait for the program to finish before continuing
	fi

	echo -e "\033[33m======================================\033[0m\n"

	# Increment the current map number
	CURRENT_MAP=$((CURRENT_MAP + 1))

	# Pause and wait for the user to press enter before continuing
	read -p "Press enter to continue"
done
