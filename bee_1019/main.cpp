#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int N, hora = 0, minuto = 0, segundo= 0;

    cin>>N;

    if(N<60)
    {
        segundo = N;
        cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
    else if(N<3600)
    {
        segundo = N%60;
        minuto = N/60;

        cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
    else
    {
        segundo = N%60;
        minuto = (N%3600)/60;
        hora = N/3600;

        cout<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
}