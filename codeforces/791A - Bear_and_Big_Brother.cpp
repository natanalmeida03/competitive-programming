#include <bits/stdc++.h>

using namespace std;

int main() {
    int res = 0, a, b; cin >> a >> b;

    while(a <= b)
    {
        a *= 3;
        b *= 2;
        res++;
    }

    cout << res;
    return 0;
}