#include <bits/stdc++.h>
/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
*/
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int stackk[10];
int i = 1, choose;
int *sptr, *full, *emptyy;

void push(void) {
    sptr++;
    if(sptr == full) {
        cout << "Stack is full!\n";
        sptr --;
    } else {
        cout << "輸入第" << i << "筆整數:";
        i++;
        cin >> sptr[i];
    }
}

void pop(void) {
    if(sptr == emptyy) {
        cout << "Stack is empty!\n";
        i = 1;
    } else {
        cout << "拿走:" << *sptr;
        sptr--;
        i--;
    }
}

void printout(void) {
    int *lptr = sptr;
    printf("目前堆疊內資料:");
    do{
        if(lptr != emptyy) {           
            cout << " " << *lptr;
            lptr--;
        } else {
            break;
        }
    } while(1);
    cout << endl;
}

int main() {   
    sptr = stackk;
    emptyy = stackk;
    full = stackk + 9;
    do {
        cout << "\n\n=== Stack Operation ===\n" <<
            "    1. Push Operation\n" <<
            "    2. Pop Operation\n" <<
            "    3. Printout Stack\n" <<
            "    0. Quit\n" <<
            "=================================\n" << 
            "請選擇 [0~3]:";

        cin >> choose;
        switch(choose) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printout();
                break;
            case 0:
                break;
            default:
                cout << "Error input (0~3)\n";
        }
    } while(choose != 0);
}
