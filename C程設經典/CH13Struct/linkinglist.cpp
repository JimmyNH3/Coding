#include <bits/stdc++.h>
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
*/
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    struct node {
        char name[10];
        int age;
        struct node *next;
    } *head, *ptr, *newptr;

    newptr = (struct node*)malloc(sizeof(struct node));
    strcpy(newptr->name, "David");
    newptr->age = 20;
    newptr->next = NULL;
    head = ptr = newptr;

    newptr = (struct node*)malloc(sizeof(struct node));
    strcpy(newptr->name, "Tom");
    newptr->age = 24;
    newptr->next = NULL;
    
    ptr -> next = newptr;
    ptr = newptr;

    newptr = (struct node*)malloc(sizeof(struct node));
    strcpy(newptr->name, "Fred");
    newptr->age = 30;
    newptr->next = NULL;
    
    ptr -> next = newptr;
    ptr = newptr;

    ptr = head;
    int i = 1;
    while(ptr != NULL) {
        cout << "node " << i++ << " ==> ©m¦W : " << ptr -> name << " ¦~ÄÖ : " << ptr -> age << endl;
        ptr = ptr->next;
    }
}
