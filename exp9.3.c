#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("myfile.txt", "r");
    char line[256];  // Buffer for each line (adjust size as needed)

    if (file == NULL) {
        printf("Error: Cannot open myfile.txt\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);  // Displays each line
    }

    fclose(file);
    return 0;
}