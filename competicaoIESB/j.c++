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

   int t; cin >> t;
   while(t--){
      int a, b, r; cin >> a >> b >> r;
      int d = (r/sqrt(2));
      cout << d << endl;
      cout << ((((2*d)+1)*((2*d)+1))-1)+((d+1 < r)?4*((2*d)+1):0)+4 << endl;
   }

   return 0;
}