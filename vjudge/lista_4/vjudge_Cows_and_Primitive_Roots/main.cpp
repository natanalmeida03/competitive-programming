#include <bits/stdc++.h>

using namespace std;
using ll = long long;

unsigned _power( unsigned val, unsigned _pow=0 ) {
	if ( _pow <= 0 )
		return 1;
	return val * _power( val, _pow-1 );
}

int main()
{
    ll p, aux, x = 0, ok = 1, res = 0, n = 0;
    ll pot;

    cin >> p;

    ll div[p];

    aux = p-1;
    for(int i = 2; aux > 1; ++i)
    {
        while(aux % i == 0)
        {
            div[x] = (p-1)/i;
            aux /= i;
            x++;
        }
    }  
    for(int i = 2; i < p; ++i)
    {
        for(int j = 0; j < x; ++j)
        {
            pot = _power(i, div[j]);
            cout << i << " ^ " << div[j] << " = " << pot << endl; 
            if(pot%p == 1) ok = 0;
        }

        if(ok == 1) res++;

        ok = 1;

    }

    cout << res << endl;

}