#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define the dimensions of the matrix
    int rows = 3;
    int cols = 4;

    // Declare a double pointer to represent the matrix
    double **matrix;

    // Allocate memory for rows
    matrix = (double **)malloc(rows * sizeof(double *));
    if (matrix == NULL) {
        fprintf(stderr, "Memory allocation failed for rows.\n");
        return 1;
    }

    // Allocate memory for each column in every row
    for (int i = 0; i < rows; i++) {
        matrix[i] = (double *)malloc(cols * sizeof(double));
        if (matrix[i] == NULL) {
            fprintf(stderr, "Memory allocation failed for columns.\n");

            // If allocation fails, free the previously allocated memory
            for (int j = 0; j < i; j++) 
                free(matrix[j]);
            
            free(matrix);

            return 1;
        }
    }

    // Initialize the matrix with values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
            matrix[i][j] = i * cols + j;
    }

    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%lf\t", matrix[i][j]);
        printf("\n");
    }

    // Free the allocated memory
    for (int i = 0; i < rows; i++) 
        free(matrix[i]);
    
    free(matrix);

    return 0;
}
