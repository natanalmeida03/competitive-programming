#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

string resultado = "";

void converte(int N)
{
    if (N == 0)
        return;

    int x = N % 3;

    N /= 3;

    converte(N);

    resultado = resultado + to_string(x);
        
}

int main()
{
    int n;

    do
    {
        cin>>n;
        if (n >= 0)
            converte(n);
        
        cout << resultado << endl;
        resultado = "";
    } while ((n >=0));  
}