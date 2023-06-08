#include <bits/stdc++.h>
using namespace std;
int n;
int locate[10000][2];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0); //speed
    
    while(cin >> n) {
        for(int i  = 0; i < n; i++) {
            for(int j = 0; j < 2; j++) {
                cin >> locate[i][j];
            }
        }

        //sort
        int temp;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n - i - 1; j++) {
                if(locate[j][0] > locate[j + 1][0]) {
                    temp = locate[j][0];
                    locate[j][0] = locate[j + 1][0];
                    locate[j + 1][0] = temp;
                    temp = locate[j][1];
                    locate[j][1] = locate[j + 1][1];
                    locate[j + 1][1] = temp;
                }

                if(locate[j][0] == locate[j + 1][0]) {
                    if(locate[j][1] < locate[j + 1][1]) {
                        temp = locate[j][1];
                        locate[j][1] = locate[j + 1][1];
                        locate[j + 1][1] = temp;
                    }
                }
            }
        }
        //

        //length 
        int ans = 0;
        int s = locate[0][0], e = locate[0][1];
        for(int i = 1; i < n; i++) {
            if(locate[i][0] >= e) {
                ans += e - s;
                s = locate[i][0];
                e = locate[i][1];
            }
            
            if(locate[i][0] < e && locate[i][1] > e) {
                e = locate[i][1];
            }
        }
        ans += e - s;
        cout << ans << endl;
    }
}
