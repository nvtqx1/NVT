#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    set<int> s;
    while(t--){
        int x, a;
        cin >> x >> a;
        if (x == 1) s.insert(a);
        else if (x == 2){
            if (!s.empty()) s.erase(a);
        }
        else{
            if (s.find(a) != s.end()) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}