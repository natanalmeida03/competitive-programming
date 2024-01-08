#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int res = 0;

    res = max((a*b*c), max((a+b+c), max((a*(b + c)), max(((a+b)*c), max(a+b*c, 0)))));

    cout << res << "\n";

    return 0;
}