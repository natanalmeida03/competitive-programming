#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    ll N; cin >> N;
    vector<ll> s(N+ 1, 0);

    for(int i = 0; i < N-1; i++)
    {
        ll a;
        cin >> a;
        s[a]++;
    }

    for(int i = 1; i <= N; i++)
    {
        cout << s[i] << "\n";
    }
    return 0;
}