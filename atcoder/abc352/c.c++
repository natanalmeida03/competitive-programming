#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define I(x) int x; cin >> x
#define f first
#define s second

int main() { _
     I(n);
     vector<pii> v;
     int p = 0, m = 0;
     for(int i = 0; i < n; i++){
          int a, b; cin >> a >> b;
          if(b-a > m){
               m = b-a;
               p = i;
          }
          
          v.eb(a, b);
     }

     ll ans = 0;
     for(int i = 0; i < n; i++){
          if(i != p)
               ans += v[i].f;
          else
               ans += v[i].s;
     }

     cout << ans << endl;
     return 0;
}