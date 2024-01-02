#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main() {
    ll n; cin >> n;

    while(n--)
    {
        ll c = 0, a; cin >> a;
        string r = "", p; 
        cin >> p;

        if(a == 2)
        {
            if((p[0] == 'b' or p[0] == 'c' or p[0] == 'd') and (p[1] == 'a' or p[1] == 'e'))
            {
                cout << p << "\n";
                return 0;
            }
        }

        if(p[0] == 'a' or p[0] == 'e')
        {
            r = r + p[0] + ".";
            c = 1;
        }

        
        
        r = r + p[0+c] + p[1+c];

        for(int i = 2+c; i < a-1; i++)
        {
            if(p[i] == 'b' or p[i] == 'c' or p[i] == 'd')
            {
                if(p[i+1] == 'b' or p[i+1] == 'c' or p[i+1] == 'd')
                {
                    r = r + p[i] + "." + p[i+1];
                    i+= 1;
                }
                else
                {
                    r = r + "." + p[i];
                }
            }
            else 
                r = r + p[i];
        }

        r = r + p[a-1];

        cout << r << "\n";
    }
    return 0;
}