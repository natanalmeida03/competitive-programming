#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t,vm;
    double lt;

    cin>>t>>vm;

    lt = ((1.0*t)*vm)/12;

    cout<<fixed<<setprecision(3);
    cout<<lt<<endl;

}