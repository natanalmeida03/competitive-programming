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

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++){
            int a; cin >> a;

            (a == 1)?c1++:c2++; 
        }

        if((c2%2==0 and c1%2 == 0) or (c1 > 0 and c1%2 == 0)) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}