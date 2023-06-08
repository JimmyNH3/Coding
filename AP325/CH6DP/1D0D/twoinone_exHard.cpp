#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, lucky;
    cin >> n >> lucky;
    int op[n][2],cost[n][2];
    op[0][0] = lucky;
    op[0][1] = lucky;
    cost[0][0] = 0;
    cost[0][1] = 0;
    for(int i = 1; i <= n; i++) {
        cin >> op[i][0] >> op[i][1];
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < 2; j++) {
            cost[i][j] = min(cost[i - 1][0] + abs(op[i - 1][0] - op[i][j]), 
            cost[i - 1][1] + abs(op[i - 1][1] - op[i][j]));
        }
    }
    cout << min(cost[n][0], cost[n][1]);
}