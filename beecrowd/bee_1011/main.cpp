#include <iostream>
#include <iomanip>

using namespace std;

const auto pi = 3.14159;

int main()
{
    double raio;

    cin>>raio;

    cout<<fixed<<setprecision(3);

    cout<<"VOLUME = "<<((4/3.0)*pi*(raio*raio*raio))<<endl;
}