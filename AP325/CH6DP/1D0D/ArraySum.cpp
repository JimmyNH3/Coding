#include <bits/stdc++.h>
using namespace std;
long long matrix[10000];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> matrix[i];
    }
    int maxnum = 0, sum = 0;

    for(int i = 0; i < m; i++) {
            if(matrix[i] + sum > 0) sum += matrix[i];
            else sum = 0;
            maxnum = max(maxnum, sum);
    }
    cout << maxnum << endl;
}
