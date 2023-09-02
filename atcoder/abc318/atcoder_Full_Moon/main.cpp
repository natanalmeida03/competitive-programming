#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, p;

    cin >> n >> m >> p;

    m <= n ? cout << ((n - m)/p)+1 << "\n":  cout << 0 << "\n";
}