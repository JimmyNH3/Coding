#include <bits/stdc++.h>

using namespace std;
using ll = long long int;
//constexpr int maxn = 3e5+10;

int main(){
    ll res=0;
    vector<ll> v;
    vector<ll> prefix(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll k;
        cin>>k;
        cout << k << " ";
        v.push_back(k);
    }


    ll pre = 0;
    int cur=0;
    for(int i=0;i<v.size();++i){
        if(v[i]<0){
            res-=v[i];
            if(prefix[cur]>0) cur++;
            
        }
        else{
            prefix[cur] +=v[i];
        }
    }

    sort(prefix.begin(),prefix.end());
    for(int i=0;i<prefix.size();++i){
        res += i=prefix.size()-1 ? prefix[i]*2 : prefix[i];
    }
    cout<<res;
}