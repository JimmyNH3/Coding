#include <bits/stdc++.h>
using namespace std;
long long dp[100005];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m, s;
    cin >> n >> m >> s;
    int f[n], sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> f[i];
        sum += f[i];
    } 
    //金主要拿多少
    int take = s - m + sum;
    //計算體積&價值
    int v[n], c[n];
    for(int i = 0; i < n; i++) {
        v[i] = f[i];
        c[i] = take - f[i];
    }
    //
    for(int i = 0; i < n; i++) {
        for(int j = take; j >= v[i]; j--) {
            dp[j] = max(dp[j], dp[j - v[i]] + c[i]);
        }
    }
    cout << dp[take];
}
