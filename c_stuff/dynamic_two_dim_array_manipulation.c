#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// You need to dynamically allocate a 2D array (matrix) in C, fill it with values, transpose the matrix (swap rows and columns), and then print the transposed matrix.

int main(void){

    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);

    printf("N: %d | M: %d\n", N, M);

    // double pointers
    int **two_dim_array = (int**)malloc(N*sizeof(int*));
    for (int i = 0; i < N; i++) {
        two_dim_array[i] = (int*)malloc(M*sizeof(int));
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++){
            two_dim_array[i][j] = j;
        }
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            printf("%d ", two_dim_array[i][j]);
        }
        printf("\n");
    }

    // transpose the matrix
        // new tranposed matrix memory allocation
    int **transposed_matrix = (int**)malloc(M*sizeof(int*));
    for (int i = 0; i < M; i++) {
        transposed_matrix[i] = (int*)malloc(N*sizeof(int));
    }

    printf("\n");

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++){
            // printf("%d ", two_dim_array[i][j]);
            int tmpVal = two_dim_array[i][j];
            transposed_matrix[j][i] = tmpVal;
        }
    }

    for (int i = 0; i < M; i++) {
        for(int j = 0; j < N; j++){
            printf("%d ", transposed_matrix[i][j]);
        }
        printf("\n");
    }

    free(two_dim_array);
    free(transposed_matrix);

}