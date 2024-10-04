#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Exercise: Dynamic Array and Pointer Arithmetic
// You are tasked with writing a program that:

// Dynamically allocates an array of integers using malloc.
// Fills the array with values from 1 to N (where N is given by the user).
// Uses pointer arithmetic to iterate over the array and print out each value.
// Reverses the values in the array in place (again using pointer arithmetic).
// Prints the reversed array.

// Part B:
// Try implementing another function that adds a new element to the array. This will involve:
// Allocating a new array with more space.
// Copying the original array's contents into the new one.
// Adding the new element at the end.

int main(void){

    int N;
    scanf("%d",&N);

    int* arr = (char*)malloc(N*sizeof(int));

    for(int i=0; i<N; i++){
        *(arr + i) = i;
    }

    printf("NORMAL:\n");
    // print the array using pointers
    for (int i=0; i<N; i++){
        printf("%d\n", *(arr + i));
    }

    // reverse the array inplace
    int startVal;
    int endVal;
    for(int i=0; i<N/2;){
        startVal = *(arr + i);
        endVal = *(arr + N - i - 1);
        // printf("Start Value: %d | End Value: %d\n", startVal, endVal);

        *(arr + N - i - 1) = startVal;
        *(arr + i) = endVal;
        i++;
    }

    printf("REVERSE:\n");
    // print the reversed array
    for (int i=0; i<N; i++){
        printf("%d\n", *(arr + i));
    }

    // free the allocated memory
    free(arr);

    // add new element to an array
    int newElement = 24;
    int newExtraMemorySpace = 5;
    int* newArray = (int*)malloc((newExtraMemorySpace + N)*sizeof(int));

    for (int i=0; i<N; i++){
        *(newArray + i) = *(arr + i);
    }

    *(newArray + N) = newElement;

    for (int i=0; i<N+1; i++){
        printf("New Element: %d\n", *(newArray + i));
    }

    free(newArray);

}