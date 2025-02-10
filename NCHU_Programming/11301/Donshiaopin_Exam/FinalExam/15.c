#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp = fopen("stu.txt", "r");
    while(!feof(fp)) {
        char str[100];
        fgets(str, 100, fp);
        printf("%s\n", str);
    }
}