#include<bits/stdc++.h>
using namespace std;

int v[4] = {0, 0, 0, 0};

void re(int c) {
    for(int i = 0; i < 4; i++) {        
        if(c == 2) {
            c = 0;
            break;
        }
        v[i] = c;
        re(c + 1);
        
    }
}

int main(){

    re(0);
}