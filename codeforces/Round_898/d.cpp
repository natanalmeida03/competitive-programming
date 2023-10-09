#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main ()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        ll n, k, p, aux=0, salto = 1;
        string s;

        cin >> k >> n;

        cin >> s;

        for(ll j = 0; j < k; ++j)
        {
            if(salto == -1 and s[j] == 'B')
            {
                if((j - p) >= n )
                {
                    aux += 1;
                    salto =  1;
                }
            }

            if(salto == 1 and s[j] == 'B')
            {
                p = j;
                salto = -1;
            }
        }

        if(salto == -1)
            aux++;

        cout << aux << "\n";
    }

    return 0;
}