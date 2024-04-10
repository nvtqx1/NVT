#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p;
    cin >> n >> p;
    if (p == 1 || p == n){
        cout << 0;
        return 0;
    }
    if (p <= n / 2) cout << p / 2;
    else cout << n/2 - p/2;
}