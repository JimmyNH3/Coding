#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;
ll n, l , u;
ll cargo[100005];

void dfs(int index, int v) {
    while(index < n) {
        if(cargo[index] >= l && cargo[index] <= u) {
            dfs(index + 1, v - cargo[n]);
        } 
    }
}


int main() {
    ouo;    
    cin >> n >> l >> u;    
    for(int i = 0; i < n; i++) cin >> cargo[i];
    dfs(0, u);
}
