import string

# Function to generate text files from A.txt to Z.txt
def generate_text_files():
    # Iterate over each letter of the alphabet
    for letter in string.ascii_uppercase:
        file_name = letter + '.cpp'  # Generate file name
        with open(file_name, 'w'):   # Create empty text file
            pass

# Call the function to generate text files
generate_text_files()

print("Text files generated successfully.")
