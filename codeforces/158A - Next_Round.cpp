#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, res = 0, v, t;

    cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        cin >> v;

        if (i < k && v == 0)
        {
            cout << i << "\n";
            return 0;
        }

        if (i >= k && t != v)
        {
            cout << i << "\n";
            return 0;
        }

        t = v;
    }

    cout << n << "\n";
    return 0;
}