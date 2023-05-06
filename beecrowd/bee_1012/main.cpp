#include <iostream>
#include <iomanip>

using namespace std;

const auto pi = 3.14159;

int main()
{
    double A, B, C;

    cin>>A>>B>>C;

    cout<<fixed<<setprecision(3);

    cout<<"TRIANGULO: "<<(A*C)/2<<endl;
    cout<<"CIRCULO: "<<(C*C*pi)<<endl;
    cout<<"TRAPEZIO: "<<((A+B)*C)/2<<endl;
    cout<<"QUADRADO: "<<(B*B)<<endl;
    cout<<"RETANGULO: "<<(A*B)<<endl;
}