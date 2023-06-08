#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;
    while(n--) {
        int n2;
        cin >> n2;

        int num[n2];
        for(int i = 0; i < n2; i++) cin >> num[i];

        int sum = num[0], maxnum = num[0];
        for(int i = 1; i < n2; i++) { //! i不得為0 or 會重複算
            if(sum < 0) sum = 0; //!先判斷是否為0再加
            sum += num[i];
            maxnum = max(maxnum, sum);
        }
        cout << maxnum << endl;
    }
}
