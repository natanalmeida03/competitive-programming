#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int t;

    cin >> t;

    for(int i = 0; i < t; ++i)
    {
        int res = 0, p, x, y;
        string s;

        for(int k = 1; k <= 10; ++k)
        {
            cin >> s;

            for(int j = 1; j <= 10; ++j)
            {
                if(s[j - 1] == 'X')
                {
                    x = k;
                    y = j;
                    if(k > 5)
                        x = (5 - (k - 5))+1;
                    if(j > 5)
                        y = (5 - (j - 5))+1;

                    x < y?res+= x: res += y;
                }
            }

        }

        cout << res << "\n";

    }

    return 0;
}