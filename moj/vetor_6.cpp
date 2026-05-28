// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor6

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
   vector<int> t(n);

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      g[i] = a;
   }

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      t[i] = a;
   }

   for(int i = 0; i < n; i++)
      cout << g[i] + t[i] << (i == n-1?"\n":" ");

   return 0;
}