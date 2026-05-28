// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.velocidadeinternet

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

   int d, u, l, n; cin >> d >> u >> l >> n;
   int md = d*(100-l)/100, mu = u*(100-l)/100;

   vector<pii> imp;
   for(int i = 0; i < n; i++){
      string a; cin >> a;
      int b, c;
      char __;
      istringstream(a) >> b >> __ >> c;

      if(b < md or c < mu)
         imp.emplace_back(b, c);
   }

   sort(all(imp), [](pii &A, pii &B){
      if (A.first != B.first) return A.first < B.first;
      return A.second < B.second;
   });

   for(auto &[a, b] : imp) cout << a << "/" << b << endl;

   return 0;
}