// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.cpf_valido

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

   string cpf; cin >> cpf;
   int pe = 10, sum = 0;
   for(int i = 0; i < 9; i++){
      sum += pe * (cpf[i]-'0');
      pe--;
   }
   
   sum %= 11;
   cout << (11-sum)+'0' << endl;

   char pri_dig;
   if(sum < 2) pri_dig = '0';
   else pri_dig = (11-sum)+'0';

   if(pri_dig != cpf[9])
      return cout << "invalido" << endl, 0;
   
   pe = 11, sum = 0;
   for(int i = 0; i < 10; i++){
      sum += pe-- * (cpf[i]-'0');
   }

   sum %= 11;

   char seg_dig;
   if(sum < 2) seg_dig = '0';
   else seg_dig = (11-sum)+'0';

   if(pri_dig != cpf[10])
      return cout << "invalido" << endl, 0;

   return cout << "valido" << endl, 0;
   return 0;
}