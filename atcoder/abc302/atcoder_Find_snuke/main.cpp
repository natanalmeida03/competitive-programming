#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w, encontrada;
    char letras[6] = {'s', 'n', 'u', 'k', 'e'}; 
    string palavra[101];

    cin >> h >> w;

    for(int i = 0; i < h; ++i)
    {
        cin >> palavra[h];
    }

    encontrada = 0;

    for(int i = 0; i < h; ++i)
    {    
        for(int j = 0; j < w; ++j)
        {
            cout << palavra[i][j] << " " << h << " " << w << endl;
            if(palavra[i][j] == 's')
            cout << h << " " << w << endl;
        }
    }
}