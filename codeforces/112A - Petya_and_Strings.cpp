#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string a, b;
    cin >> a >> b;

    int r = strcasecmp(a.c_str(), b.c_str());

    if (r < 0) {
        cout << "-1\n";
    } else if (r > 0) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }
}