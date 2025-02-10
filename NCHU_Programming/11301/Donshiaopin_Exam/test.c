#include <stdio.h>
#include <stdlib.h>

int * foo ();
int main() {
    int *ptr; 
    ptr = foo(); 
    return 0;
}

int * foo () {
    /* functino body */
    return ptr; /* return an address */
}

