#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int r = 1;

    cin >> s;

    if(s[s.length() - 1] == '1')
        r = 0;


    cout << s.length() << " dsds" << endl;

    
    if(r == 1)
        cout << ceil((s.length())/2) << endl;
    else
        cout << ceil((s.length() + 1)/2) << endl;

}