#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, asc, leng;
    string s;

    cin >> n >> s;

    leng = s.length();

    for(int i = 0; i < leng; ++i)
    {
        asc = s[i] + n;
        if(asc > 90) asc = abs(90 - asc) + 64;

        s[i] = char(asc);
    }
    cout << s << endl;
}