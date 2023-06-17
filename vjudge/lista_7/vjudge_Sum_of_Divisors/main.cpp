#include <bits/stdc++.h>

using namespace std;
using ll = long long;

unsigned div(ll num)
{
    ll c = 2;
    if(num == 1) return 1;

    for( ll i=2; i<((int)floor(sqrt(num)))+1; i++)
    {
        if(num % i == 0) c += (num/i == i) ? 1 : 2;
    }

    return c;
}

int main()
{
    ll num, k,res = 0, nd;

    cin >> num;

    
    
}