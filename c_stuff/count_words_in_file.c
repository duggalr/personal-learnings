#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// count words in a file

int main(void)
{

    FILE  *fptr;
    fptr = fopen("lipsum.txt", "r");
    if (fptr == NULL) {
        printf("Could not open file");
        return 0;
    }

    // Seek to the end of the file
    fseek(fptr, 0, SEEK_END);
    long fileSize = ftell(fptr);  // Get the size of the file
    rewind(fptr);  // Go back to the start of the file

    // Allocate memory for the file contents (+1 for the null-terminator)
    char *content = (char*)malloc((fileSize + 1) * sizeof(char));

    // Read the file into the string
    size_t bytesRead = fread(content, sizeof(char), fileSize, fptr);
    content[bytesRead] = '\0';  // Null-terminate the string

    fclose(fptr);

    char *token;
    token = strtok(content, " ");

    int wordCount = 0;
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ");  // Get the next token
    }

    printf("Word count: %d\n", wordCount);

    return 0;
}
