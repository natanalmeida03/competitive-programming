#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int A, B, resA = 1, resB = 1;

    cin >> A >> B;

    for(int i = 0; i < B; ++i)
    {
        resA *= A;
    }
    for(int i = 0; i < A; ++i)
    {
        resB *= B;
    }

    cout << resA + resB << "\n";
}