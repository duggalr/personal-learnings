#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Reverse a string with pointers
int main(void){

    // TODO: understand memory / pointers to a better degree and go from there
    // Why do we need pointers or dynamic memory allocation here?

    char mainString[] = "Hello World";
    size_t mainStringSize = strlen(mainString);
    printf("String Size: %lu\n", mainStringSize);

    char *ptr;
    ptr = (char*)malloc(mainStringSize + 1);  // initialize heap with mainStringSize memory + 1 (terminating character)
    printf("Address of ptr: %p\n", (void*)ptr);

    if (ptr == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    for (int i = 0; i < mainStringSize; i++){
        printf("ival: %d\n", i);
        ptr[i] = mainString[mainStringSize - i - 1];
        // *(ptr + i) = mainString[mainStringSize - i - 1];
    }
    ptr[mainStringSize] = '\0';

    // char defRefValue = *ptr;
    printf("defRefValue: %s\n", ptr);  // printf will continue reading characters from that address until it encounters the null terminator

    char *anotherPtr = (char*)malloc(mainStringSize + 1);  // Allocate memory for the new string
    if (anotherPtr != NULL) {
        strcpy(anotherPtr, ptr);  // Copy the string from `ptr` to `anotherPtr`
    }

    printf("AnotherPtr: %s\n", anotherPtr);
    free(ptr);

    // return 0;
}
