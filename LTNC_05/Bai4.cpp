#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int x;
    cin >> x;
    while(x--){
        int a;
        cin >> a;
        auto it = lower_bound(v.begin(), v.begin() + n, a);
        if (a == *it)
            cout << "Yes " << it - v.begin() + 1 << endl;
        else cout << "No " << it - v.begin() + 1 << endl;
    }
    return 0;
}