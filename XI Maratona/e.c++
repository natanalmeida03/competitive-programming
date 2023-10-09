#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main ()
{
    ios::sync_with_stdio(false);
    ll n, g;
    unordered_map<ll, int> t;
    
    cin >> n;

    while(n--)
    {  
        cin >> g;
        t[g]++;
    }

    for (auto i : t)
    {
        if(i.second % 3 == 1)
            return cout << i.first << "\n", 0;
    }
}