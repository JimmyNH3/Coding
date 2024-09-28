#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<string> unpig;
vector<ll> qaununpig;

bool exist(string now){ 
    for(auto &v: unpig) {
        if(v == now) return true;
    }
    return false;
}

int main(){

    map<string, ll> animal;
    ll n;
    cin >> n;
    string name;
    ll quan, maxpig = 0;
    for(ll i = 0; i < n; i++) {
        cin >> name >> quan;
        if(name == "pig") maxpig = max(maxpig, quan);
        else {
            if(exist(name) == true) {
                quan = max(quan, animal[name]);
            }
            unpig.push_back(name);
            qaununpig.push_back(quan);
        }
    }
    
    sort(qaununpig.begin(), qaununpig.end());

    ll ans = maxpig;
    for(auto &v: qaununpig) {
        if(v < maxpig) ans += v;
    }
    cout << ans;
}