// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor2

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
   int ans = 0, min = INT_MAX;

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      if(a < min) ans = i, min = a;
   }

   cout << ans << endl;

   return 0;
}