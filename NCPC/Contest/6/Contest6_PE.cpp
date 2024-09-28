#include <bits/stdc++.h>
using namespace std;

int main() {    
    int n, a;
    cin >> n >> a;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 7; j++) {
            for(int k = 0; k < 7; k++) {
                for(int l = 0; l < 7; l++) {
                    a*=a;
                }
            }
        }
    }

}