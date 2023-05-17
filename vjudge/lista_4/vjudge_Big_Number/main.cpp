#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int Factorial(int n)
{
    if(n < 0) return 0;
    if(n == 1) return 1;

    double digitos = 0;
    for (int i = 2; i <= n; i++) {
        digitos += log10(i);
    }
    
    return (floor(digitos)) + 1;
}

int main()
{
    int x;
    ll num;

    cin >> x;

    for(int i = 0; i < x; ++i)
    {
        cin >> num;

        cout << Factorial(num) << endl;

    }
}