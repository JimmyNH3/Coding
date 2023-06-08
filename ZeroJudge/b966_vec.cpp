#include <bits/stdc++.h>
using namespace std;
int n;
int locate[1000000][2];
vector<pair<int, int>> v;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0); //speed
    int t1, t2;
    while(cin >> n) {
        for(int i  = 0; i < n; i++) {
            // cin >> locate[i][0] >> locate[i][1];
            cin >> t1 >> t2;
            v.push_back({t1, t2});
        }
        t1 = 1;
        //sort
        // int temp;
        // for(int i = 0; i < n; i++) {
        //     for(int j = i; j < n - 1; j++) {
        //         if(locate[j][0] > locate[j + 1][0]) {
        //             temp = locate[j][0];
        //             locate[j][0] = locate[j + 1][0];
        //             locate[j + 1][0] = temp;
        //             temp = locate[j][1];
        //             locate[j][1] = locate[j + 1][1];
        //             locate[j + 1][1] = temp;
        //         }

        //         if(locate[j][0] == locate[j + 1][0]) {
        //             if(locate[j][1] > locate[j + 1][1]) {
        //                 temp = locate[j][0];
        //                 locate[j][0] = locate[j + 1][0];
        //                 locate[j + 1][0] = temp;
        //                 temp = locate[j][1];
        //                 locate[j][1] = locate[j + 1][1];
        //                 locate[j + 1][1] = temp;
        //             }
        //         }
        //     }
        // }
        //
        
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){return (a.first==b.first)?a.second > b.second:a.first < b.first;});

        //length 
        int ans = 0, s = v[0].first, e = v[0].second;
        for(int i = 1; i < n; i++) {
            if(v[i].first >= e) {
                ans += e - s;
                s = v[i].first;
                e = v[i].second;
            } else if(v[i].second > e) {
                e = v[i].second;
            }
            
            
        }
        ans += e - s;
        std::cout << ans << endl;
    }
}
