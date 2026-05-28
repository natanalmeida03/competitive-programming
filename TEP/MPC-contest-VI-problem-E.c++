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


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i*i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() { _
    map<int, int> n;
    int k = 0;
    n[k++] = 2;
    for(int i = 1; i < (100000 + 2); i+=2)
        if(isPrime(i)) n[k++] = i;
    
    ll v; cin >> v;
    ll d = 1, p = 0;
    ll ans = 0;

    while(v != 0){
        p = 0;
        while(v%n[p] != 0) p++;
        v -= n[p];
        ans++;
    }

    cout << ans << endl;

    return 0;
}