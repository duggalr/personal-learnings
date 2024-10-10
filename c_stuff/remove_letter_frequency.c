#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// https://leetcode.com/problems/remove-letter-to-equalize-frequency/description/

bool main(void){

    size_t initialStrLength = 4;
    char str[] = "abbc";

    int letter_frequency[26] = {0};

    for (int i = 0; i < (initialStrLength-1); i++) {
        char c = str[i];
        letter_frequency[c - 'a']++;  // adding count to the letter that appeared
    }

    int min_value = 1000000000;
    for (int i = 0; i < (initialStrLength-1); i++) {
        printf("Letter: %c and Value: %d\n", str[i], letter_frequency[i]);
        if (letter_frequency[i] < min_value){
            min_value = letter_frequency[i];
        }
    }

    printf("Minimum value: %d\n", min_value);

    bool potential = true;
    for (int i = 0; i < (initialStrLength-1); i++) {
        int cval = letter_frequency[i];
        if (cval != min_value) {
            if ((cval-1) != min_value){
                potential = false;
                printf("RV: %d\n", potential);
                return false;
            }

            if ((cval-1) == min_value) {
                potential = true;
            }
        }
    }

    printf("RV: %d\n", potential);
    return true;

}