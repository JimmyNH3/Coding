#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main() {
    char digit[10010];
    scanf("%s", digit);
    int i = 0, j = strlen(digit) - 1;
    while(i < j) {
        if(digit[i] != digit[j]) {
            printf("It's not a palindrome\n");
            break;        
        }
        i += 1;
        j -= 1;
    }
    if(i >= j) printf("It's a palindrome\n");
    printf("The length of the digit is %lld", strlen(digit));
}