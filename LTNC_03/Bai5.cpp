#include <bits/stdc++.h>
using namespace std;

//hackerrank
string hackerrankInString(string s) {
    string s1 = "hackerrank";
    int n1 = s1.size();
    int n = s.size();
    int j = 0; int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == s1[j]){
            cnt++;
            j++;
        }
        if(cnt == n1) return "YES";
    }
    return "NO";
}

int main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        cout << hackerrankInString(s) << endl;
    }
    return 0;
}
