#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n, maxpig = 0;
    cin >> n;

    vector<ll> influ;

    for(ll i = 0; i < n; i++) {
        string name;
        ll quan;
        cin >> name >> quan;
        if(name == "pig") maxpig = max(maxpig, quan);
        else influ.push_back(quan);           
    }

    ll ans = maxpig;
    for(auto &i: influ) {
        if(i < maxpig) ans += i;
    }
    cout << ans;
}