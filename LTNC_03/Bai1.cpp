#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b; cin >> a >> b;
    int length1 = a.length();
    int length2 = b.length();
    cout << a.length() << " " << b.length() << endl;
    cout << a + b << endl;
    string str1 = a.substr(1, length1 - 1);
    string str2 = b.substr(1, length2 - 1);
    str1 = b[0] + str1;
    str2 = a[0] + str2;
    cout << str1 << " " << str2 << endl;
    return 0;
}
