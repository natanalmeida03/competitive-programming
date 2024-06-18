#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          map<ll, int> v;

          ll sum = 0;
          int ans = 0;
          for(int i = 0; i < n; i++){
               ll x; cin >> x;
               v[x] = 1;
               sum += x;
               if(sum%2 == 0 and sum <= 2*(1e9)+1 and v[sum/2] > 0) ans++;
          }

          cout << ans << endl;
     }
     return 0;
}