#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int main() {
    int a[100];
    memset(a, -1, sizeof(a)); 
    for(int i = 0; i < 100;  i++) {
        cout << a[i];
    }
}