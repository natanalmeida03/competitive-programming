#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int N, A, B, C;

    cin >> N >> A >> B >> C;

    if(N <= A && N <= B && N <= C)
    {
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}