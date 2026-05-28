// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.viagemaconselha

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

   int n, d = 1;

   while(cin >> n){
      int res = 0, nota = -1;
      for(int i = 0; i < n; i++){
         int a, b; cin >> a >> b;
         if(b > nota){
            nota = b;
            res = a;
         }else if(b == nota){
            if(a < res) res = a;
         }
      }

      cout << "Dia " << d++ << endl;
      cout << res << endl;
      cout << endl;
   }

   return 0;
}