#include <bits/stdc++.h>

#define endl "\n";
using namespace std;

int main() {
    int res = 0, h = 0, x; cin >> x;

    for(int i = 5; i > 0; i--)
    {
        res += floor(x/i);
        x %= i;
        
        if(x == 0)
            break;
    }

    cout << res << endl;
    return 0;
}