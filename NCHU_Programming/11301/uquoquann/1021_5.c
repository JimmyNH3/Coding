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
printf("Enter the number n ");
scanf("%d", &n);
double appro = 1;
int index;
for(index = 1; index <= n; index++) {
    appro += (1.0 / stair(index));
}
printf("The approximating of e is %f\n", appro);

float epsilon, e = 0.0f, term = 1.0f;
int i = 1, fact = 1;
printf("Enter value for epsilon: ");
scanf("%f", &epsilon);
while (term >= epsilon) {
e += term;
fact *= i++;
term = 1.0f / fact;
}
printf("Approximation of e: %g\n", e);
return 0;
}