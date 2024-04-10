#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, t;
    cin >> n >> t;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; ++i){
        int b;
        cin >> b;
        for (int j = 0; j < b; ++j){
            int num;
            cin >> num;
            a[i].push_back(num);
        }
    }
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
    return 0;
}
