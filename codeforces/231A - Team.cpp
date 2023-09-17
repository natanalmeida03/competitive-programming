#include <bits/stdc++.h>

using namespace std;

int main () 
{
    int n, p, v, t, res=0;

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> p >> v >> t;

        if((p + v + t) >= 2)
            res++;
    }

    cout << res << "\n";
}