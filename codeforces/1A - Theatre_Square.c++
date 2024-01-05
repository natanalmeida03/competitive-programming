#include <bits/stdc++.h>

using namespace std;

int main() {
    double_t n, m, a; cin >> n >> m >> a;
    long long res = 0;

    res = ceil(n/a);
    res *= ceil(m/a);

    cout << res << "\n";

    return 0;
}