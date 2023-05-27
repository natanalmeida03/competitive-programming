#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cont=0;
    string s, t;

    cin >> n >> s >> t;

    for(int i = 0; i < n; ++i)
    {
        if((s[i] == t[i]) or ((s[i] == '0' or s[i] == 'o') and (t[i] == '0' or t[i] == 'o')))
            ++cont;
        else if((s[i] == t[i]) or ((s[i] == '1' or s[i] == 'l') and (t[i] == '1' or t[i] == 'l')))
            ++cont;
    }

    if(cont == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}