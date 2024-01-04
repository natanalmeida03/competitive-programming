#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w; cin >> k >> n >> w;
    int valBan = 0, cb = k;

    for(int i = 1; i <= w; i++)
    {
        valBan += cb;
        cb += k;
    }

    if(n >= valBan)
        cout << 0 << "\n";
    else
        cout << valBan - n << "\n";

    return 0;
}