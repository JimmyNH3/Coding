#include <bits/stdc++.h>
using namespace std;
long long dp[100005];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n , k;
    cin >> n >> k;
    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];
    dp[0] = c[0];

    for(int i = 0; i < n; i++) {
        if(i > k + 1) {
            for(int j = i - 2 * k - 1, j <= i - 1; j++) {

            }
        }
    }
}