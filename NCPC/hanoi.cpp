#include <bits/stdc++.h>
using namespace std;

#define A 1
#define B 2
#define C 3


int steps = 1;
int step(int n, int start, int mid, int des) {
    if(n == 1) cout << "Ring 1 from " << start << " to " << des << "\n";
    else {
        step(n - 1, start, des, mid);
        cout << "Ring " << n << " from " << start << " to " << des << "\n";
        step(n - 1, mid, start, des);
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    step(n, 1, 2, 3);
}
