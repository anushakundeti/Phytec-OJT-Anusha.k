#include <stdio.h>
#include<string.h>
int main() {
    FILE *file;
    char text[1000]; // You can adjust the size as needed

    // Open a file for writing
    file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    printf("Enter text to be stored in the file. Type 'exit' to end:\n");

    while (1){
        // Read a line of text from the keyboard
        fgets(text, sizeof(text), stdin);

        // Check if the user wants to exit
        if (strcmp(text, "exit\n") == 0) {
            break;
        }

        // Write the text to the file
        fputs(text, file);
    }

    // Close the file
    fclose(file);

    printf("Text has been successfully stored in the file.\n");

    return 0;
}

