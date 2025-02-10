#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int id;
    char name[50];
    float grade;
} student[2] = {{121233,"amy",66.54}, {121234,"ray",99}};

void writeToBinaryFile() {
    FILE* fp = fopen("stu1.txt", "w");
    int i = 0;
    for(i = 0; i < 2; i++) {
        fprintf(fp, "%d %s %f\n", student[i].id, student[i].name, student[i].grade);
    }
    fclose(fp);
}

int main() {
    writeToBinaryFile();
}