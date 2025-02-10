#include <stdio.h>
#include <math.h>

int main() {    
    int vector[1][2];
    scanf("%d%d", &vector[0][0], &vector[0][1]);

    double magnitude = sqrt(pow(vector[0][0],2) + pow(vector[0][1],2));
    printf("%.2f", magnitude);
}
