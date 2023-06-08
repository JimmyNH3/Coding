#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    queue<int> qq;
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
                qq.empty() == false ? cout << qq.front() << endl : cout << -1 << endl;
                break;
            case 3:
                if(qq.empty() == false) qq.pop();
        }
    }
}
