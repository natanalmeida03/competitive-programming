#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i)
    {

        cin >> s;

        if (s[0] == 'a')
            cout << "YES" << "\n";
        else if (s[1] == 'b')
            cout << "YES" << "\n";
        else if (s[2] == 'c')
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }
}