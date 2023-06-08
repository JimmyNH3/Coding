#include <bits/stdc++.h>
using namespace std;
queue<int> qq;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    int n;
    cin >> n;

    while(n--) {
        int k, add;
        cin >> k;
        
        switch(k) {
            case 1:
                cin >> add;
                qq.push(add);
                break;
            case 2:
                qq.empty() == true ? cout << qq.front() << endl : cout << -1 << endl;
                break;
            case 3:
                if(qq.empty() == false) qq.pop();
        }
    }
}
