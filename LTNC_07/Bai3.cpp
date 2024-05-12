#include <bits/stdc++.h>

using namespace std;

int cnt = 0;

void solve(int x, int n, int a){
    if (x < 0) return;
    if (x == 0){
        cnt++;
    }
    for (int i = a; pow(i, n) <= x; i++){
        solve(x - pow(i, n), n, i + 1);
    }
}

int main(){
    int x, n;
    cin >> x >> n;
    solve(x, n, 1);
    cout << cnt;
    return 0;
}