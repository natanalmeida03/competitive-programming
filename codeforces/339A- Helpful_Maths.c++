#include <bits/stdc++.h>

using namespace std;

int main ()
{
    vector<int> n;
    string s;

    cin >> s;

    if(s.length() == 1)
    {
        cout << s << endl;
        return 0;
    }

    for(int i = 0; i < s.length(); ++i)
        if(s[i] == '1' or s[i] == '2' or s[i] == '3')
            n.emplace_back((s[i] - '0'));

    sort(n.begin(), n.end());

    for(int i = 0; i < n.size(); ++i)
    {
        if(i == n.size() - 1)
            cout << n[i] << "\n";
        else
            cout << n[i] << "+";
    }

}