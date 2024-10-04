#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// // Find longest text line
// while (there's another line)
// if (it's longer than the previous longest)
// (save it)
// (save its length)
// print longest line

int main(void){

    char stringOne[] = "Hello World";
    char stringTwo[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque commodo massa eget laoreet tempor. Proin tincidunt augue non purus gravida congue.";
    char stringThree[] = "Morning";
    char stringFour[] = "Suspendisse ultrices vitae sem sit amet mollis. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Etiam id dignissim felis.";

    char *stringArray[] = {stringOne, stringTwo, stringThree, stringFour};
    size_t arraySize = sizeof(stringArray) / sizeof(stringArray[0]);
    // printf("Array size: %lu\n", arraySize);

    int maxStringSize = 0;
    int maxStringIndex = -1;
    for (int i = 0; i < arraySize;) {
        size_t currentStringSize = strlen(stringArray[i]);
        // printf("String %d: %s\nSize: %zu\n", i+1, stringArray[i], currentStringSize);

        if (currentStringSize > maxStringSize){
            maxStringIndex = i;
            maxStringSize = currentStringSize;
        }
        i++;
    }

    printf("Longest string: %s\n - Size: %d\n", stringArray[maxStringIndex], maxStringSize);

}