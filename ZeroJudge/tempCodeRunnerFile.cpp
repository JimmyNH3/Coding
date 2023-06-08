#include <bits/stdc++.h>
#define ouo ios_base::sync_with_stdio(false), cin.tie(0)
#define ll long long
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], sum[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sum[0] = arr[0];
    for(int i = 1; i < n; i++) sum[i] = arr[i] + sum[i - 1];
    for(int i = 0; i < n; i++) cout << sum[i] << " ";
    int l = 0, r = n - 1, ans;
    
    while(l < r) {
        int minnum = arr[0], index;

        for(int i = l; i <= r; i++) {
            if(arr[i] < minnum) {
                minnum = arr[i];
                index = i;
            }
        }

        if(sum[index - 1] > sum[r] - sum[index]) r = index - 1;
        else l = index + 1;
    }

    cout << endl << arr[l];
}
