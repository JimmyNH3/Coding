#include <stdio.h>

void printNumberInWords(int number) {
    char *tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (number < 10 || number > 99) {
        printf("Please enter a valid two-digit number.\n");
        return;
    }

    if (number >= 11 && number <= 19) {
        printf("%s\n", teens[number - 10]);
    } else {
        int tenPart = number / 10;
        int unitPart = number % 10;

        if (unitPart == 0) {
            printf("%s\n", tens[tenPart]);
        } else {
            printf("%s-%s\n", tens[tenPart], units[unitPart]);
        }
    }
}

int main() {
    int number;

    printf("Enter a two-digit number: ");
    scanf("%d", &number);

    printNumberInWords(number);

    return 0;
}
