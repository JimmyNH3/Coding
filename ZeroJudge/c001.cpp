#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int lcs[720][720] = {0};
    string s1, s2;
    while(cin >> s1 >> s2) {
        int m = s1.size() , n = s2.size();
        
        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                if(s1[i - 1] != s2[j - 1]) {
                    lcs[i][j] = max(lcs[i][j - 1], lcs[i - 1][j]);
                } else {
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                }
            }
        }
        cout << lcs[m][n] << endl;
    }
}
