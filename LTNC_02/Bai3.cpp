#include<bits/stdc++.h>
using namespace std;

int divisibleSumPairs(int n, int k, vector<int> v){
    int l = 0;
    int cnt = 0;
    while(l < n){
        int r = l + 1;
        while(r < n){
            if((v[l] + v[r]) % k == 0) cnt++;
            r++;
        }
        l++;
    }
    return cnt;
}

int main()
{
    int n; cin >> n;
    int k; cin >> k;
    vector<int> v;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        v.push_back(a[i]);
    }
    sort(v.begin(), v.end());
    cout << divisibleSumPairs(n, k, v);

    return 0;
}
