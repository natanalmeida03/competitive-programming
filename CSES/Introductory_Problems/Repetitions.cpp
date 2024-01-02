#include <bits/stdc++.h>

using namespace std;

int main() {

    int mlen = 1, con = 1;
    string s;
    cin >> s;

    for(int i = 1; i < s.length(); i++)
    {
        if(s[i] == s[i - 1])
            con++;
        else
        {
            mlen = max(mlen, con);
            con = 1;
        }
    }
    mlen = max(mlen, con);
    cout << mlen << "\n";

    return 0;
}