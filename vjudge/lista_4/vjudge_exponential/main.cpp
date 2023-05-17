#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, r = 0, j = 2, maior = 0; 
    long long pot;

    cin >> x;

    if(x == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    for (int i = 2; i < 32;++i)
    {
        do
        {
            pot = pow(i,j);
            //cout << "O VALOR DE: " << i << " POR " << j << " E IGUAL A = " << pot << endl;
            if(pot<=x)
            {
                r = pot;
                if(r > maior)
                {
                    maior = r;
                }
            }

            ++j;
        }while(j <= 10);
        j=2;

    }

    cout << maior << endl;
}