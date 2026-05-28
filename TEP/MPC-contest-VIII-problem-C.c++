#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define f first
#define s second

int main() { _

    ll n; cin >> n;
    int x; cin >> x;

    if(x == 2 or x == 0){
        n--;
    }

    if(n == 0){
        if(x == 2) return cout << 2 << endl, 0;
        if(x == 1) return cout << 0 << endl, 0;
    }
    n%=3;
    if(n == 0) cout << 1 << endl;
    if(n == 1) cout << 0 << endl;
    if(n == 2) cout << 2 << endl;

    return 0;
}