#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    string p, m, f; cin >> p >> m >> f;

    for(int i = 0; i < 5; i++){
        if(f[i] != p[i] and f[i] != m[i]){
            cout << "Orra meu...\n";
            return 0;
        } 
    }

    cout << "Herdou!\n";
    return 0;
}