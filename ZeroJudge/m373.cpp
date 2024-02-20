#include <bits/stdc++.h>
#define ll long long
int F[10005][10005] = {0};
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, k, maxnum = 0;
    cin >> n >> k;
    for(int j = 0; j < n; j++) cin >> F[0][j];



    if(k == 0) {
        for(int i = 1; i < n; i++) F[i] = max(F[i], F[i-1] + F[i]);
    }


    for(int i = 0; i < n; i++) maxnum = max(maxnum, F[i]);
    cout << maxnum << endl;
}
