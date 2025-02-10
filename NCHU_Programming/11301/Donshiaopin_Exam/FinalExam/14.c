#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fp = fopen("stu.txt", "r");
    while(!feof(fp)) {
        // int c;
        // c = fgetc(fp);
        // printf("%c", c);
        char c;
        fscanf(fp, "%c", &c);
        printf("%c", c);
    }
}