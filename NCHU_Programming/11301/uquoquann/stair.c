#include <stdio.h>

long long int stair(int n) {
    if(n == 1) return 1;
    else {
        return stair(n - 1) * n;
    }
}


int main(void)
{
int n;
printf("Enter the number n");
scanf("%d", &n);
double appro = 2;
int index;
for(index = 1; index <= n; index++) {
    
    printf("%lld ", stair(index));
    appro += (1.0 / stair(index));
}
printf("%f", appro);
}