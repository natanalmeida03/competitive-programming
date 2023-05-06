#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C;

    cin>>A;
    cin>>B;
    cin>>C;

    cout<<fixed<<setprecision(1);

    cout<<"MEDIA = "<<(((2*A)+(3*B)+(5*C))/10)<<endl;
}