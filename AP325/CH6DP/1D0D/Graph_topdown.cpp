#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll F[100][100] = {0};
int g(int i, int j) {
    if(i == 1 || j == 1) return 1;
    if(F[i][j] > 0) return F[i][j];
    return F[i][j] = g(i - 1, j) + g(i, j -1);

}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n, m;
    cin >> n >> m;
    cout << g(m, n) << endl;
}