#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string n;

    cin>>n;

    for(int i = 0; i < n.length(); ++i)
        if(n[i] < 93)
            n[i] = n[i]+32;

    vector<string> pa = {
        "selado", 
        "registrado", 
        "carimbado", 
        "avaliado", 
        "rotulado"
        };

    int a = 0, b = -1, c = 0, d = 1001;

    for(int i = 0; i < 5; ++i)
    {
        int found = n.find(pa[i]);
        a = found;
        if ((a != -1) and (d > i))
        {
            ++c;
            if(a <= b)
                return cout << "Nao vai a lugar nenhum!" << "\n", 0;

            b = a;
        }else
            d = i;
    }

    if(c < 2)
        return cout << "Nao vai a lugar nenhum!" << "\n", 0;

    return cout << "Sim, sim, sim, sim." << "\n", 0;

}