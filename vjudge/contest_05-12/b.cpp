#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main() {
    ll N, M; cin >> N >> M;

    while(M--)
    {
        ll A;
        cin >> A;
        N -= A;
        if(N < 0)
        {
            cout << -1 << "\n";
            return 0;
        }
    }

    cout << N << "\n";
    return 0;
}