#include<bits/stdc++.h>
using namespace std;

int findDigits(int n){
    int t = n, cnt = 0, r;
    while(n){
        r = n % 10;
        if(r != 0 && t % r == 0) cnt++;
        n /= 10;
    }
    return cnt;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << findDigits(n) << endl;
    }

    return 0;
}
