#include <bits/stdc++.h>

using namespace std;

map<string,long long int> m;

int main(){

    cin.tie(0)->sync_with_stdio(0);
    
    int n;
    cin>>n;
    long long int f_max=0;
    while(n--){
        string p;
        long long int f;
        cin>>p>>f;


        if(p=="pig"){
            if(m.find(p)!=m.end()){
                m[p] = f>m[p] ? f : m[p];
            }
            else m[p] = f;

            f_max = m[p];
        }
        else{
            if(f<f_max) m[p] = f;
        }
    }
    long long int res=0;
    for(auto i: m){
        if(i.second<f_max || i.first=="pig") res+=i.second;
    }

    cout<<res;

}