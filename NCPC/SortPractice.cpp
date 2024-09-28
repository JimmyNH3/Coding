#include <bits/stdc++.h>
using namespace std;

struct people{
    int height;
    int weight;
};

bool cmp(people A, people B) {
    if(A.height != B.height) return A.height > B.height;
    return A.weight < B.weight;
}


int main(){
    people a[1010];
    for(int i = 0; i < 1010; i++) {
        cin >> a[i].height >> a[i].weight;
    }
    sort(a, a+ 1010, cmp);
    for(int i = 0; i < 1010; i++) cout << a[i].height << a[i].weight;
} // 報名比賽