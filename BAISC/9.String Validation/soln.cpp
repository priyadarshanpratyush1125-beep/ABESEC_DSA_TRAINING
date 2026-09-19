#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool amp = false;
    bool hash = false;

    for(char c : s) {
        if(c == '&') amp = true; 
        if(c == '#') hash = true;
    }

    if(s.length() % 2 == 0 && amp && hash)
        cout << "YES";
    else
        cout << "NO";
}