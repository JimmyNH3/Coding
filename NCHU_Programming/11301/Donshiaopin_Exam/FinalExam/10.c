#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void multiplyMatrices(int** A, int** B, int** C, int m, int n, int p) {
    int i, j, k;
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
            
        }   
    }
}

int main() {
    int m, n, p, i, j;
    //enter dimensions
    printf("enter the dimension of matrix A:\n");
    scanf("%d%d", &m, &n);
    printf("enter the dimension of matrix B:\n");
    scanf("%d%d", &n, &p);
    
    //allocation
    int **A = (int**) malloc(m * sizeof(int*));
    for(i = 0; i < m; i++) {
        A[i] = (int*) malloc(n * sizeof(int));
        memset(A[i], 0, n * sizeof(int));
    }

    int **B = (int**) malloc(n * sizeof(int*));
    for(i = 0; i < n; i++) {
        B[i] = (int*) malloc(p * sizeof(int));
        memset(B[i], 0, p * sizeof(int));
    }

    int **C = (int**) malloc(m * sizeof(int*));
    for(i = 0; i < m; i++) {
        C[i] = (int*) malloc(p * sizeof(int));
        memset(C[i], 0, p * sizeof(int));
    }

    //enter matrix A,B
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < n; i++) {
        for(j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    multiplyMatrices(A, B, C, m, n, p);

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}