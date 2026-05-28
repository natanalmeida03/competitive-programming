//https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2016f2p2_falta

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define f first
#define s second



int main() { _
   vector<int> fac = {0, 1, 2, 6, 24, 120, 720, 5040, 40320};
   int n; cin >> n;
   map<string, int> v;

   string s = "";
   for(int i = 1; i <= n; i++)
      s += (i +'0');

   do{
      v[s] = 1;
   }while(next_permutation(s.begin(), s.end()));
   
   for(int i = 0; i < fac[n]-1; i++){
      s = "";
      for(int i = 0; i < n; i++){
         char a; cin >> a;
         s+=a;
      }
      v[s]--;
   }

   for(auto &c : v) if(c.second == 1) for(int i = 0; i < c.first.size(); i++) cout << c.first[i] << ((i-1==c.first.size())? "\n":" ");
   
   return 0;
}