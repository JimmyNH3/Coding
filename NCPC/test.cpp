#include <bits/stdc++.h>
using namespace std;
int main() {
    string sky = "甲乙丙丁戊己庚辛壬癸", ground = "子丑寅卯辰巳午未申酉戌亥";
    //cout << sky[7] << endl;
    //1906 = 2 6
    int s = 2, g = 6, n;
    while(cin >> n) {
        if(n - 1906 < 0) {
            s -= (1906 - n) % 10;
            if(s < 0) s += 10;
            g -= (1906 - n) % 12;
            if(g < 0) g += 12;
        } else if(n - 1906 > 0) {
            s += (n - 1906) % 10;
            if(s > 9) s -= 10;
            g += (n - 1906) % 12;
            if(g > 11) g -= 12;
        }        
    }

    
    if(n == 1906) cout << "丙午";
    else cout << sky[s] << ground[g];
}