#include<bits/stdc++.h>
using namespace std;

int camelcase(string s) {
    int cnt = 1;
    for(int i = 0; i < (int) s.size(); i++){
        if(isupper(s[i])) cnt++;
    }
    return cnt;
}

int main()
{
    string s; cin >> s;
    cout << camelcase(s);

    return 0;
}
