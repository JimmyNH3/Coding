#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int rows, cols, i, j;
    int **arr; 

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    arr = (int **) malloc(rows * sizeof(int *)); 
    for (i = 0; i < rows; i++) {
        arr[i] = (int *) malloc(cols * sizeof(int));
        memset(arr[i], 0, cols * sizeof(int)); //initialize the array with memset
    }

    // for(i = 0; i < rows; i++) {     
    //     for(j = 0; j < cols; j++) {     
    //         printf("%d", arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    for(i = 0; i < rows; i++) {     
        free(arr[i]);
    }
    free(arr);

    // for(i = 0; i < rows; i++) {     
    //     for(j = 0; j < cols; j++) {     
    //         printf("%d", arr[i][j]);
    //     }
    //     printf("\n");
    // }
 //complete the code snippet here
    return 0;
}