#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int rows, cols;
    int **arr;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    arr = (int **) malloc(rows * sizeof(int *)); 
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *) malloc(cols * sizeof(int));
        memset(arr[i], 0, cols * sizeof(int)); 
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j;
        }
    }
    for(int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
 // complete the code snippet here to free the allocated memory
    return 0;
}
