#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main()
{
    int a, b, c, index = 0;

    cin>>a>>b>>c;

    index = (a+b+abs(a-b))/2;
    index = (index+c+abs(index-c))/2;

    cout<<index<<" eh o maior"<<endl;
}