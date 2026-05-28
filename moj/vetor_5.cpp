// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor5

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
   vector<int> g(n);

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      g[i] = a;
   }

   int v; cin >> v;

   for(int i = 0; i < n; i++){
      if(v == g[i]) return cout << "pertence\n", 0;
   }

   cout << "nao pertence\n";

   return 0;
}