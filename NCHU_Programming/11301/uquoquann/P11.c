#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char id[11];
    scanf("%s", id);
    int num = (id[1] - '0') * 8 + (id[2] - '0') * 7 + (id[3] - '0') * 6 + (id[4] - '0') * 5 + (id[5] - '0') * 4 + (id[6] - '0') * 3 + (id[7] - '0') * 2 + (id[8] - '0') * 1 + (id[9] - '0') * 1;
    switch(id[0]) {
        case 65: (1*1+0*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 66: (1*1+1*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 67: (1*1+2*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 68: (1*1+3*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 69: (1*1+4*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 70: (1*1+5*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 71: (1*1+6*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 72: (1*1+7*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 73: (3*1+4*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 74: (1*1+8*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 75: (1*1+9*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 76: (2*1+0*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 77: (2*1+1*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 78: (2*1+2*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 79: (3*1+5*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 80: (2*1+3*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 81: (2*1+4*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 82: (2*1+5*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 83: (2*1+6*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 84: (2*1+7*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 85: (2*1+8*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 86: (2*1+9*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 87: (3*1+2*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 88: (3*1+0*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 89: (3*1+1*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;
        case 90: (3*1+3*9+num) % 10 == 0 ? printf("valid") : printf("invalid"); break;    
    }
}