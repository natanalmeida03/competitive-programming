// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.vetor3

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
   vector<int> e, o;

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      a%2==0?e.eb(a):o.eb(a);
   }

   for(int i = 0; i < e.size(); i++)
      cout << e[i] << (i == e.size()-1?"\n":" ");
   
   for(int i = 0; i < o.size(); i++)
      cout << o[i] << (i == o.size()-1?"\n":" ");

   return 0;
}