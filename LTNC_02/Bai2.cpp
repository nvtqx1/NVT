#include<bits/stdc++.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2){
    int cnt1, cnt2;
    for(int i = 0; i < 10000; i++){ //dam bao so lan nhay la giong nhau(den cung mot thoi diem)
        cnt1 = x1 + (i * v1);
        cnt2 = x2 + (i * v2);
        if(cnt1 == cnt2) return "YES";
    }
    return "NO";
}

int main()
{
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << endl;

    return 0;
}
