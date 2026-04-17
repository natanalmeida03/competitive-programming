#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        long long n, x, y, d;cin >> n >> x >> y >> d;

        long long ans = LLONG_MAX;

        if (abs(x - y) % d == 0) ans = abs(x - y) / d;

        if ((y - 1) % d == 0) ans = min(ans, ((x - 1 + d - 1) / d) + ((y - 1) / d));

        if ((n - y) % d == 0) ans = min(ans, ((n - x + d - 1) / d) + ((n - y) / d));

        cout << (ans == LLONG_MAX ? -1 : ans) << '\n';
    }
}