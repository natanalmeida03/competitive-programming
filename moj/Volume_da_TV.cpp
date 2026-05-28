//https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2013f2pj_volume
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

   int v, t; cin >> v >> t;

   for(int i = 0; i < t; i++){
      int a; cin >> a;
      v += a;
      v = min(100, v);
      v = max(0, v);
   }

   cout << v << endl;

   return 0;
}