#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    float renda;

    cin >> renda;

    if(renda <= 2000)
        cout << "Isento" << endl;
    else if(renda <= 3000)
        cout << "R$ " << 0.08*(renda - 2000)*1.00 << endl;
    else if(renda <= 4500)
        cout << "R$ " << 80 + 0.18*(renda - 3000) << endl;
    else
        cout << "R$ " << (80 + 270 + 0.28*(renda - 4500)) << endl;

    return 0;
}