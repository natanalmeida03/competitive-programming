#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int aux, aux2, c;
    int n;
    int dig[12];

    cin >> n;
    aux2 = n;

    c = 0;

    while (aux2 != 0)
    {
        c = c + 1;
        aux2 = aux2 / 10;
    }

    for(int i = c-1; i >= 0; --i)
    {
       aux = (n/pow(10, i));
       dig[i] = aux%10;
    }

    if(n <= pow(10, 3)){
        cout << n;
    }else if(n <= pow(10, 4)){
        for(int i = 0; i < 1; ++i){
            dig[i] = 0;
        }
        for(int i = c-1; i >= 0; --i)
        {
            cout << dig[i];
        }
        
    }else if(n <= pow(10, 5)){
        for(int i = 0; i < 2; ++i){
            dig[i] = 0;
        }
        for(int i = c-1; i >= 0; --i)
        {
            cout << dig[i];
        }
    }else if(n <= pow(10, 6)){
        for(int i = 0; i < 3; ++i){
            dig[i] = 0;
        }
        for(int i = c-1; i >= 0; --i)
        {
            cout << dig[i];
        }
    }else if(n <= pow(10, 7)){
        for(int i = 0; i < 4; ++i){
            dig[i] = 0;
        }
        for(int i = c-1; i >= 0; --i)
        {
            cout << dig[i];
        }
    }else if(n <= pow(10, 8)){
        for(int i = 0; i < 5; ++i){
            dig[i] = 0;
        }
        for(int i = c-1; i >= 0; --i)
        {
            cout << dig[i];
        }
    }else if(n <= pow(10, 9)){
        for(int i = 0; i < 6; ++i){
            dig[i] = 0;
        }
        for(int i = c-1; i >= 0; --i)
        {
            cout << dig[i];
        }
    }
}