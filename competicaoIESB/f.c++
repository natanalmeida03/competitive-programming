#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define fi first
#define se second

int main() { _

   int n; cin >> n;
   vector<pii> v(n);

   for(auto &[a,b]: v) cin >> a >> b;

   int d = 0, e = 0, c = 0, b = 0;
   for(int i = 0; i < n; i++){
      auto [x, y] = v[i];
      e = min(e, x);
      b = min(b, y);

      d = max(d, x);
      c = max(c, y);
   }

   cout << e-1 << " " << b-1 << "\n" << d+1 << " " << c+1 << endl;

   return 0;
}