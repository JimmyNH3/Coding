#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i < N; i++) {  
        long int a, b, c;
        scanf("%ld %ld %ld", &a, &b, &c);
        switch(a) {
            case 1:
                printf("%ld\n", b + c);
                break;
            case 2:
                printf("%ld\n", b - c);
                break;
            case 3:
                printf("%ld\n", b * c);
                break;
            default:
                printf("%ld\n", b / c);
                break;
        }
    }


}

