#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
#define pii pair<int, int>
using namespace std;

int arr[100005] = {-1};
ll sum[100005] = {-1};
vector <pii> in; 

bool cmp(pii a, pii b) {
    return a.first < b.first; 
}

int main() {
    ouo;

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> arr[i];
    sum[1] = arr[1];
    for(int i = 2; i <= n; i++) sum[i] = arr[i] + sum[i - 1];
    //for(int i = 1; i <= n; i++) cout << sum[i] << " ";
    
    //index
    for(int i = 1; i <= n; i++) {
        in.push_back({arr[i], i});
    }

    sort(in.begin(), in.end(), cmp);

    int l = 1, r = n; 
    int index = l;
    for(int i = l + 1; i <= r; i++) {
        if(arr[i] < arr[index]) {
            index = i;
        }
    }
     
    while(l < r) {
        

        if(sum[index - 1] > sum[r] - sum[index]) r = index - 1;
        else l = index + 1;
    }

    cout << arr[l];
}
