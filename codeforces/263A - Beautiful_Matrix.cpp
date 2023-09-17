#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 2, j = 0, n;

    for (int k = 1; k <= 5; ++k)
    {
        for (int g = 1; g <= 5; ++g)
        {
            cin >> n;
            if (n == 1)
            {
                j = abs(3 - g);
                i = abs(3 - k);
            }
        }
    }

    cout << j + i << "\n";
}