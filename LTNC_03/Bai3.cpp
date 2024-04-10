#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string time = s.substr(8, 2);
    string first = s.substr(0, 2);
    string second = s.substr(2, 6);
    if(time == "AM"){
        if(first == "12"){
            first = "00";
            return first + second;
        }
        return first + second;
    } else if(time == "PM"){
        int first1 = stoi(first);
        if(first1 >= 12){
            return first + second;
        } else if(first1 < 12){
            int tmp = first1 + 12;
            string res = to_string(tmp);
            return res + second;
        }
    }
    return "";
}

int main()
{
    string s; cin >> s;
    cout << timeConversion(s);

    return 0;
}
