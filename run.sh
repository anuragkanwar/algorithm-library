#!/usr/bin/env bash
# Script to compile and run a C++ file in a single conceptual line of operations.

# Check if a filename is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <filepath.cpp>"
  exit 1
fi

# Get the C++ source file from the first argument
SOURCE_FILE="$1"

# Check if the source file exists
if [ ! -f "$SOURCE_FILE" ]; then
  echo "Error: File '$SOURCE_FILE' not found."
  exit 1
fi

# Determine the output filename (e.g., from hello.cpp to hello)
# This uses parameter expansion to remove the .cpp extension
OUTPUT_NAME="${SOURCE_FILE%.cpp}"

# Inform the user what's happening
echo "Building and running: $SOURCE_FILE"
echo "Output executable will be: $OUTPUT_NAME"

# Compile and run the C++ file
# The '&&' ensures that ./$OUTPUT_NAME is executed only if g++ compilation is successful.
# -std=c++11 is a common standard, you can change or remove it if needed.
# -o "$OUTPUT_NAME" specifies the output file name for the compiled executable.
g++ -std=c++23 "$SOURCE_FILE" -o "$OUTPUT_NAME" && ./"$OUTPUT_NAME"

# Check the exit status of the last command (the execution of the C++ program or g++ if it failed)
EXIT_STATUS=$?

if [ $EXIT_STATUS -ne 0 ]; then
  if [ ! -f "$OUTPUT_NAME" ]; then
    echo "Compilation failed."
  else
    echo "Program exited with status $EXIT_STATUS."
  fi
  if [ -f "$OUTPUT_NAME" ]; then
    echo "Cleaning up executable: $OUTPUT_NAME"
    rm "$OUTPUT_NAME"
  fi
  exit $EXIT_STATUS
else
  echo "" # Newline for cleaner output
  echo "Program finished successfully."
fi

# Optional: Clean up the executable after successful run
# Uncomment the following lines if you want to remove the executable after it runs
if [ -f "$OUTPUT_NAME" ]; then
  echo "Cleaning up executable: $OUTPUT_NAME"
  rm "$OUTPUT_NAME"
fi

exit 0
