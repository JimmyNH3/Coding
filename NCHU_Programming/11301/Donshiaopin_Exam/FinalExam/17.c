#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100]; 
    char author[50]; 
    int year; 
} book[2] = {{"Isak Dinesen", "Out of Africa", 1937}, {"Zhang Chengzhi", "Where the River Runs Black", 1986}};

int main() {
    int i;
    for(i = 0; i < 2; i++) {
        printf("[%d]%s, ¡§%s,¡¨ %d\n", i+1, book[i].title, book[i].author, book[i].year);
    }
}