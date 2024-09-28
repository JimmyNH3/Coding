#include <bits/stdc++.h>
using namespace std;

int n, m, s, d;
vector<int> son[10005];
vector<int> visited;
vector<int> ans;

bool exist(int now){ 
    for(auto &v: visited) {
        if(v == now) return true;
    }
}


void dfs(int x, int depth) {  
    if(exist(x) != true) visited.push_back(x);
    for(int i = 0; i < son[x].size(); i++) {        
        if(depth == d) {
            ans.push_back(x);
            break;
        }
        if(exist(son[x][i]) == true) continue;                
        dfs(son[x][i], depth + 1);
    }
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int former, latter;
        cin >> former >> latter;
        son[former].push_back(latter);
        son[latter].push_back(former);
    }

    cin >> s >> d;

    dfs(s, 0);
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size() - 1; i++) {
        cout << ans[i] << " ";
    }
    cout << ans[ans.size() - 1];
}
