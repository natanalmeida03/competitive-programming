#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long n, d, p, sum = 0, a, c = 0, res = 0, v, h = 0;
    cin >> n >> d >> p;

    unsigned long long f[n + 2];

    for(unsigned long long i = 0; i < n; ++ i)
        cin >> f[i];

    sort(f, f + n);

    a = n;

    do
    {
        for(unsigned long long i = 0; i < d; ++i)
        {
            //cout << (a - 1) - i << "\n";

            if(((a - 1) - i ) == 0)
            {
                //cout << "(a - 1) - i" << "\n";
                c++;
                a = 0;
                h = 1;

                if (sum <= p)
                    break;
                
                

            }
            sum+= f[(a - 1) - i];

        }

        //cout << sum << "\n";

        if (sum <= p)
            break;
        

        if(h == 1)
        {
            a = 0;
            break;
        }
            

        c++;

        a = a - d;

        if(a <= 0)
            break;

        sum = 0;
        

    }while(true);



    if(a == 0)
    {
        v = c * p;
        res += v;

        cout << res << "\n";

        return 0;

    }

    for(unsigned long long i = 0; i < a; ++i)
    {
        res = res + f[i];
    }

    v = c * p;

    res += v;

    cout << res << "\n";


}