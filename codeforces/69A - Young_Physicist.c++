#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    float res = 0;

    if(n == 1)
    {
        float a, b, c; cin >> a >> b >> c;
        if(a == 0 and b == 0 and c == 0)
        {
            cout << "YES\n";
            return 0;
        }
        cout << "NO\n";
        return 0;
    }

    for(int i = 1; i <= n; i++)
    {
        float a, b, c; cin >> a >> b >> c;
        res += c;
    }

    if(res == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}