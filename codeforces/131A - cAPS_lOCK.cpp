#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin >> s;
    int u = 0, l = 0;


    for(auto &c : s)
    {
        if(isupper(c))
            u++;
        else
            l++;
    }

    if(s.length() == 1 and islower(s[0]))
        for(auto &c : s)
            c = toupper(c);
    else if(s.length() == 1 and isupper(s[0]))
        for(auto &c : s)
                c = tolower(c);
    else if(islower(s[0]) and u > s.size() - 2)
        for(auto &c : s)
        {
            if(isupper(c))
                c = tolower(c);
            else if(islower(c))
                c = toupper(c);
        }
    else if(l == 0)
        for(auto &c : s)
        {
            if(isupper(c))
                c = tolower(c);
        }

    cout << s << "\n";

    return 0;
}