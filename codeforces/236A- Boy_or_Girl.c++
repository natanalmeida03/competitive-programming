#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    cin >> s;
    set<int> v(s.begin(), s.end());
    s.assign( v.begin(), v.end() );

    if(s.size()%2 == 0)
        cout << "CHAT WITH HER!" << "\n";
    else
        cout << "IGNORE HIM!" << "\n";
}