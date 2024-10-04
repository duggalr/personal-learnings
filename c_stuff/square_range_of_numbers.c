#include <stdio.h>
#include <stdlib.h>

// Take a list of numbers; go through each one, square them and print it

int main(void){

    // array of numbers
    int numbers[] = {3,4,5,6,7};
    
    // get the length of the array
    size_t arrSize = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array Size: %lu\n", arrSize);

    int squaredNumbers[arrSize];

    for (int i = 0; i < arrSize;){
        int current_value = numbers[i];
        int squared_num = current_value * current_value;
        squaredNumbers[i] = squared_num;
        printf("Original Number: %d | Squared Number: %d\n", current_value, squaredNumbers[i]);
        i++;
    }

    return 0;

}