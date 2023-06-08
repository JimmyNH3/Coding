#include <bits/stdc++.h>
using namespace std;
vector<int> tree[50000];
vector<int> tour;

void dfs(int parent, int now) {
    tour.push_back(now);
    for(int n : tree[now]) {//!problem!
        if(n == parent) {
           continue; 
        }
        dfs(now, n);
        tour.push_back(now);
    }
}

int main() {
    int n, total = 0;
    cin >> n;
    for(int i = 0; i < n - 1; i++) { //!problem!
        int a, b, c;
        cin >> a >> b >> c;
        tree[a].push_back(b);
        tree[b].push_back(a);
        total += c;
    }
    for(int i = 0; i < n - 1; i++) {
        sort(tree[i].begin(), tree[i].end()); //!problem!
    }

    dfs(-1 , 0);
    cout << total * 2 << endl;
    for(int u : tour) {
        cout << u << " ";
    }
}
