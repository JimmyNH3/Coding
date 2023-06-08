#include <bits/stdc++.h>
#define ll long long
using namespace std;

//int cmp(int n) {
    //if(n < 3) {
    //    return n;
    //} else return cmp(n - 1) + cmp(n - 2);
//}

int main() {
    //ios_base::sync_with_stdio(false), cin.tie(0);
    //int n;
    //cin >> n;
    //cout << cmp(n) << endl;
    ll F[10000];
    int n;
    cin >> n;
    F[1] = 1;
    F[2] = 2;
    for(int i = 3; i <= n; i ++) {
        F[i] = F[i - 1] + F[i - 2];
    }
    cout << F[n];
}
