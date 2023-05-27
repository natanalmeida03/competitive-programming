#include <bits/stdc++.h>
 
using namespace std;
using ll = long long;
 
int main()
{
    ll a, b, x, c;
 
    cin >> a >> b >> x;

    (b%x==0 or a%x==0)?cout << ((b-a)/x) + 1 << endl:cout << ((b-a)/x) << endl;
}