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

int is_prime(int n){
   if(n == 1) return 0;
   if(n == 2 or n == 3) return 1;
   if(n%2==0 or n%3==0) return 0;

   for(int i = 5; i * i <= n; i+=2)
      if(n%i==0) return 0;
   
   return 1;
}

int main() { _

   int t; cin >> t;
   vector<int> primos;
   for(int i = 0; primos.size() < 100; i++){
      if(is_prime(i)) primos.eb(i);
   }

   while(t--){
      int p, n; cin >> p >> n;
      vector<int> fat(p, 0);
      for(int i = 0; i < p; i++)
         while(n%primos[i]==0) fat[i]++, n/=primos[i];

      if(n != 1) cout << "Nao" << endl;
      else{
         cout << "Sim" << endl;
         for(int i = 0; i < fat.size(); i++) cout << fat[i] << (i==fat.size()-1?"\n":" ");
      }
   }

   return 0;
}