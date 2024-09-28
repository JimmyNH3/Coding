#include <bits/stdc++.h>
using namespace std;

int n, m ,d0, d1, d2;
vector<int> qmark[10000];

int main() {    
    cin >> n >> m >> d0 >> d1 >> d2;
    string seat[n];
    for(int i = 0; i < n; i++) {
        cin >> seat[i];
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(seat[i][j] == '?') qmark[i].push_back(j);
        }
    }

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < qmark[i].size(); j++) cout << qmark[i][j];
    //     cout << "\n";
    // }
    // for(int i = 0; i < n; i++) {
    //     cout << seat[i] << "\n";
    // }
}