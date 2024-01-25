#include <bits/stdc++.h>

#define endl "\n";
using namespace std;

int main() {
    int n, k; cin >> n >> k;

    while(k--)
    {
        int u = n % 10;
        if(u == 0)
            n /= 10;
        else
            n--;
    }
    
    cout << n << endl;
    return 0;
}