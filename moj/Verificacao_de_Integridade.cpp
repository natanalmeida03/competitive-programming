// https://moj.naquadah.com.br/new/treino/problem/?id=monitores.verificacao-integridade

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
   int n; cin >> n;
   int ans = 0;

   for(int i = 0; i < n; i++){
      string s; cin >> s;
      for(int j = 0; j < s.length();j++){
         char c = tolower(s[j]);
         ans += i + j + (int(c) - 97);
      }
   }

   if(ans == t) cout << "Integridade do arquivo confirmada.\n";
   else cout << "Alerta: Integridade comprometida!\n";

   return 0;
}