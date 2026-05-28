// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.vestibular

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
   vector<char> g(n);
   int ans = 0;
   
   for(auto &c : g) cin >> c;

   for(int i = 0; i < n; i++){
      char a; cin >> a;
      if(g[i] == a) ans++;
   }

   cout << ans << endl;

   return 0;
}