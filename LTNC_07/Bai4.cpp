#include <bits/stdc++.h>

using namespace std;

vector<string> words;

vector<string> checkXAxis(int index, int x, int y, vector<string> v){
    for (int i = 0; i < words[index].length(); i++){
        if (v[x][y + i] == '-' || v[x][y + i] == words[index][i]){
            v[x][y + i] = words[index][i];
        }
        else{
            v[0][0] = '0';
            return v;
        }
    }
    return v;
}

vector<string> checkYAxis(int index, int x, int y, vector<string> v){
    for (int i = 0; i < words[index].length(); i++){
        if (v[x + i][y] == '-' || v[x + i][y] == words[index][i]){
            v[x + i][y] = words[index][i];
        }
        else{
            v[0][0] = '0';
            return v;
        }
    }
    return v;
}

void solvePuzzle(int index, vector<string> v){
    if (index < words.size()){
        for (int i = 0; i < 10; i++){
            for (int j = 0; j <= (10 - words[index].length()); j++){
                vector<string> tmp = checkXAxis(index, i, j, v);
                if (tmp[0][0] != '0') solvePuzzle(index + 1, tmp);
            }
        }
        for (int i = 0; i < 10; i++){
            for (int j = 0; j <= (10 - words[index].length()); j++){
                vector<string> tmp = checkYAxis(index, j, i, v);
                if (tmp[0][0] != '0') solvePuzzle(index + 1, tmp);
            }
        }
    }
    else{
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                cout << v[i][j];
            }
            cout << endl;
        }
        return;
    }
}

int main(){
    vector<string> v;
    string s;
    for (int i = 0; i < 10; i++){
        cin >> s;
        v.push_back(s);
    }
    cin >> s;
    stringstream ss(s);
    string a;
    while (getline(ss, a, ';')){
        words.push_back(a);
    }
    solvePuzzle(0, v);
    return 0;
}