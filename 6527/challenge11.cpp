#include <stdio.h>

int main() {
    FILE *fptr;
    char buffer[100];

    // 1. WRITE Mode
    fptr = fopen("data.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    fprintf(fptr, "Learning File Handling in C.\n");
    fclose(fptr);

    // 2. APPEND Mode
    fptr = fopen("data.txt", "a");
    if (fptr != NULL) {
        fprintf(fptr, "This line was appended later.\n");
        fclose(fptr);
    }

    // 3. READ Mode
    fptr = fopen("data.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("Contents of data.txt:\n");
    // Read words until the end of the file (EOF)
    while (fscanf(fptr, "%s", buffer) != EOF) {
        printf("%s ", buffer);
    }

    fclose(fptr);
    return 0;
}