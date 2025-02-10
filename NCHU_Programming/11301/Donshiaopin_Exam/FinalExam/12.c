#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int id;
    char name[50];
    float grade;
} student[5];

void readFromBinaryFile() {
    FILE* fp = fopen("stu.txt", "r");
    int i = 0;
    while(!feof(fp)) {
        fscanf(fp, "%d", &student[i].id);
        fscanf(fp, "%s", student[i].name);
        fscanf(fp, "%f", &student[i].grade);
        i++;
    }
}

int main() {
    readFromBinaryFile();
    int i;
    for(i = 0; i < 5; i++) {
        printf("%d %s %f\n", student[i].id, student[i].name, student[i].grade);
    }
}