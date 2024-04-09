#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    if (n == 1) {
        cout << 1 << endl;
    } else if (n == 2 or n == 3) {
        cout << "NO SOLUTION" << endl;
    }else if (n == 4) {
        cout << "2 4 1 3" << endl;
    } 
    else {
        for (int i = 0; i < n; i += 2) {
            cout << v[i] << " ";
        }
        for (int i = 1; i < n; i += 2) {
            cout << v[i] << " ";
        }
    }

    return 0;
}