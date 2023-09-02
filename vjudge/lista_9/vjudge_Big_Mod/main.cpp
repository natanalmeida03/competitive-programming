#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long b, p, m, r;

    cin >> b >> p >> m;


    r = pow(b, p) - (m * int( pow(b, p)/m));

    cout << r << endl;
    
}