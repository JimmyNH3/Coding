#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll grade[10000];
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> grade[i];
    }
    grade[1] = 1;
    grade[2] = 2;
    for(int i = 3; i <= n; i++) {
        grade[i] += min(grade[i - 1], grade[i - 2]);    
    }
    cout << grade[n];
}
