import os

# Function to generate folders from sheet-1 to sheet-10
def generate_folders():
    # Iterate over numbers from 1 to 10
    for i in range(1, 11):
        folder_name = f'sheet-{i}'  # Generate folder name
        os.makedirs(folder_name)    # Create folder

# Call the function to generate folders
generate_folders()

print("Folders generated successfully.")
