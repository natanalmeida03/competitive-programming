#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c = 0, j = 0, i = 0;
    string t1, t2,s;

    cin >> n >> s;

    if(n % 2 == 1)
    {
        cout << "No";
        return 0;
    } 

    j = n/2;
    for(i = 0; i < n/2; ++i)
    {
        if(s[i] == s[j]) ++c;

        j++;

    }

    if( c == n/2) 
        cout << "Yes";
    else
        cout << "No";

    
}