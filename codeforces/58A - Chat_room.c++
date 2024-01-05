#include <bits/stdc++.h>

using namespace std;

int main() {
    string h = "hello", s; cin >> s;
    int i = 0;

    for(auto &c : s)
    {
        c = tolower(c);
        if(c == h[i])
            i++;
        if(i == 5)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";

    return 0;
}