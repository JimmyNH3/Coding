#include <stdio.h>

typedef struct{
    char *title;
    char *author;
    int pages;
    int price;
}book;

int main() {    
    book arr[3] = {{"caculus", "Guass", 300, 1450}, 
                   {"algorithm", "bill", 450, 1000}, 
                   {"hamlet", "William", 215, 200}};
    int i;
    for(i = 0; i < 3; i++) {
        printf("title:%s, author:%s, pages:%d, price:%d\n",
        arr[i].title, arr[i].author, arr[i].pages, arr[i].price);
    }
}
