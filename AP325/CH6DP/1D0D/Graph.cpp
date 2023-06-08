#include <bits/stdc++.h>
using namespace std;
#define ll long long
/*
int g(int i, int j) {
    if(i == 1 || j == 1) {
        return 1;
    } else {
        return(g(i - 1, j) + g(i, j -1));
    }
}
*/

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n >> m;
    //cout << g(m, n) << endl;
    ll graph[100][100];
    for(int i = 0; i <= n; i++) {
        graph[i][1] = 1;
    }
    for(int i = 0; i <= m; i++) {
        graph[1][i] = 1;
    }
    for(int i = 2; i <= n; i++) {
        for(int j = 2; j <= m; j++) {
            graph[i][j] = graph[i - 1][j] + graph[i][j - 1];
        }
    }
    cout << graph[n][m];

}