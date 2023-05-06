#include <iostream>
#include <iomanip>

using namespace std;

const auto pi = 3.14159;

int main()
{
    double raio, area;

    cin>>raio;

    cout<<fixed<<setprecision(4);

    cout<<"A="<<(raio*raio*pi)<<endl;

}