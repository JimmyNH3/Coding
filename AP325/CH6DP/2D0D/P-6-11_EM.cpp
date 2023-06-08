#include <bits/stdc++.h> 
using namespace std;
long long cata[1000] = {0};
int sum = 0;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    cata[0] = 1;
    for(int i = 1; i <= n; i++) {
        cata[i] += cata[i - 1];
    }
}