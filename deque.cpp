#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0);
    deque<int> a = {1, 2 ,3, 4, 5};
    for(int i = 0; i < a.size(); ++i) cout << a[i] << " " << i << " ";
    cout << endl;
    for(auto j = a.begin(); j < a.end(); j++) cout << *j;
}