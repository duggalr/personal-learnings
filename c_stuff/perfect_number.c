#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// https://leetcode.com/problems/perfect-number/description/

// A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
// Given an integer n, return true if n is a perfect number, otherwise return false.

// C
bool main(void){
    int N;
    scanf("%d",&N);
    int s = 1;
    for (int i = 2; i < N; i++){
        if ((N % i) == 0){
            s = s + i;
        }
    }

    printf("Total Sum: %d\n", s);
    if (s == N) {
        printf("Perfect Number\n");
        return true;
    } else {
        printf("Not Perfect Number\n");
        return false;
    }
}