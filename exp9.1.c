#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Open (or create) file in write mode
    fp = fopen("myfile.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter some text: ");
    fgets(text, sizeof(text), stdin);  // read a line from user

    // Write text to the file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    printf("Text written to myfile.txt successfully.\n");
    return 0;
}