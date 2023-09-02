#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, r;

    cin >> n >> a;

    if(n > 500) r = n % 500;
    else r = n;

    if(a >= r) cout << "Yes";
    else cout << "No";
    
}