#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// Reverse a string without pointers
int main(void){

    // TODO: understand memory / pointers to a better degree and go from there
    // Why do we need pointers or dynamic memory allocation here?

    char mainString[] = "Hello World";
    size_t mainStringSize = strlen(mainString);
    printf("String Size: %lu\n", mainStringSize);

    char reverseString[12] = "";
    for (int i = 0; i < mainStringSize; i++) {
        printf("Current i-value: %d | Index Value: %d\n", i, (mainStringSize - i - 1));
        reverseString[i] = mainString[mainStringSize - i - 1];
    }
    printf("Reversed String: %s\n", reverseString);

    // char *ptr = (char*)malloc(mainStringSize);
    // printf("Address of ptr: %p | String Size: %d\n", (void*)ptr, mainStringSize);

    // if (ptr == NULL) {
    //     print("Memory allocation failed.\n");
    //     exit(1);
    // }


    // char* reversedStrValue = malloc(mainStringSize + 1);
    // printf("Address of reversedStrValue: %p | String Size: %d\n", (void*)reversedStrValue, mainStringSize);

    // for (int i=0; i < mainStringSize; i++){
    //     reversedStrValue[i] = mainString[mainStringSize - i - 1];
    //     printf("%c\n", mainString[mainStringSize - i - 1]);
    // }
    
    // // Add the null terminator at the end
    // reversedStrValue[mainStringSize] = '\0';
    
    // // Print the reversed string
    // printf("Reversed String: %s\n", reversedStrValue);

    // // Free the allocated memory
    // free(reversedStrValue);

    // return 0;
}