#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // Open existing file for reading
    file = fopen("myfile.txt", "r");
    
    // Check if file opened successfully
    if (file == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }
    
    // Read and display character by character
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }
    
    // Close the file
    fclose(file);
    return 0;
}