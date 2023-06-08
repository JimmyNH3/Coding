#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1000005];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, k;
    cin >> n >> k;
    ll price[n];

    for(int i = 0; i < n ;i++) cin >> price[i];

    dp[0] = price[0];
    
    for(int i = 1; i < n; i++) {
        if(i - 1 - k >= 0) {
            dp[i] = max(dp[i - 1 - k] + price[i], dp[i - 1]); // 2.箂硂ぱぶㄢぱ
        } else {
            dp[i] = max(dp[i - 1], price[i]); //! max ゑ耕玡璶
            // 1. i - 1 - k 箂硂ぱ程ぱ(璶ヰkぱ)
            // τ基单讽ぱ厨筍(暗ぱ羆基Τぱ) ┪玡ぱ基
        }
        
    }
    cout << dp[n - 1] << endl;
}
