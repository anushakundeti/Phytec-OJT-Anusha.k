# Print the current PATH
echo "Current PATH: $PATH"

# Create a custom directory containing a script
mkdir -p ~/custom/bin
echo 'echo "Custom script executed!"' > ~/custom/bin/myscript
chmod +x ~/custom/bin/myscript

# Update the PATH to include our custom directory
export PATH="$PATH:~/custom/bin"

# Now, you can run the custom script without specifying the full path
myscript

