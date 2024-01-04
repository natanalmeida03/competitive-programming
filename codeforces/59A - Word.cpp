#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int lc = 0, uc = 0;

    for(int i = 0; i < s.length(); i++)
    {
        if(isupper(s[i]))
            uc++;
        else if(islower(s[i]))
            lc++;
    }

    if(lc >= uc)
        for(auto &c : s)
            c = tolower(c);
    else
        for(auto &c : s)
            c = toupper(c);

    cout << s << "\n";

    return 0;
}