#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    vector<string> d{"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    cin >> s;

    for(int i = 0; i < 7; ++i)
    {
        if(d[i] == s)
            cout << 7 - i << endl;
    }
}