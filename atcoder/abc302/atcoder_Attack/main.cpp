#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll a, b;

    cin >> a >> b;

    cout << (a + b - 1 ) / b << endl;
    cout << (not (a & 1) ? a / b : a / b + 1 ) << endl;
    a%b==0?cout << (a/b) << endl:cout << (a/b)+1 << endl;
}