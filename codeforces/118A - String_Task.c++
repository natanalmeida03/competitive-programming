#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    for(auto &c : s)
    {
        c = tolower(c);
        if(!(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y'))
            cout << "." << c;
    }

    cout << "\n";
    
    return 0;
}