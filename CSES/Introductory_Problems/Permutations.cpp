#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }

    while(next_permutation(v.begin(), v.end()))
    {
        for(int i = 1; i <= n; i++)
        {
            cout << v[i] << " ";
        }

        cout << "\n";
    }
    return 0;
}