#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    unsigned long long res = 0, l = 1;

    for(int i = 0; i < 64; ++i)
    {
        cin >> n;

        if(i > 0)
            l = l + l;

        if(n == 1)
            res = res + l;
    }

    cout << res << endl;
}