#include <bits/stdc++.h>
using namespace std;

vector<int> son[10010];
vector<int> an;
void dfs(int x) {
    an.push_back(x);
    for(int i = 0; i < son[x].size(); i++) {
        dfs(son[x][i]);
    }
}

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        son[a].push_back(b);
    }
    
    int q, ans;
    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> ans;
        dfs(ans);
        if(an.size() - 1 == 0) cout << 0;
        else {
            sort(an.begin() + 1, an.end());
            for(int i = 1; i < an.size(); i ++) {
                cout << an[i] << " ";
            }
        }

        cout << "\n";
        an.clear();
    }
}