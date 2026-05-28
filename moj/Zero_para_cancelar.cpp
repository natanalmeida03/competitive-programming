//https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2021f1p1_zero
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
   stack<int> st;

   for(int i = 0; i < n; i++){
      int a; cin >> a;
      if(!st.empty() and a == 0) st.pop();
      else if(a != 0) st.emplace(a);
   }

   int ans = 0;
   while(!st.empty())
      ans += st.top(),
      st.pop();

   cout << ans << endl;

   return 0;
}