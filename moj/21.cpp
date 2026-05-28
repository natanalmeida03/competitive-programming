//https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1062

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

   queue<string> st;

   for(int i = 0; i < 53; i++){
      string a; cin >> a;
      st.emplace(a);
   }

   int ans = 0;
   while(!st.empty()){
      auto a = st.front();
      st.pop();
      if(a[0] == 'T' or a[0] == 'J' or a[0] == 'Q' or a[0] == 'K'){
         if(ans + 10 > 21) break;

         ans += 10;
      }else if(a[0] == 'A'){
         if(ans + 1 > 21) break;

         ans += 1;
      }else{
         int b = a[0] - '0';
         if(ans + b > 21) break;

         ans += b;
      }
   }

   cout << ans << endl;

   return 0;
}