#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k){
    static constexpr int alphabetLength = 'z' - 'a' + 1;
    char firstChar = 'a';
    for(auto & chr : s){
        if (isalpha(chr)){
            firstChar = isupper(chr) ? 'A' : 'a';
            chr = static_cast<char>( 0 + (chr - firstChar + k) % alphabetLength + firstChar);
        }
    }
    return s;
}

int main()
{
    int n; cin >> n;
    string s; cin >> s;
    int k; cin >> k;
    cout << caesarCipher(s, k);

    return 0;
}
