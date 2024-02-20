#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll p[10005] = {0};

ll cut(int left, int right) {
    if(right - left <= 1) return 0;
    ll m = (p[left] + p[right]) / 2;
    ll len = p[right] - p[left];
    int s = lower_bound(p+left, p+right, m) - p;
    if(p[s - 1] - p[left] >= p[right] - p[s]) s--;
    return len + cut(left, s) + cut(s, right);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);

    int n, l;
    cin >> n >> l;
    p[n + 1] = l;
    for(int i = 1; i <= n; i++) scanf("%lld", &p[i]);
    printf("%lld\n",cut(0, n+1));
}
