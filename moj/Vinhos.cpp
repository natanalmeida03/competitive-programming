// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1298

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
   priority_queue<int, vector<int>, greater<int>> pq;
   while(n--){
      char a; cin >> a;
      if(a == '+'){
         int b; cin >> b;
         pq.emplace(b);
      }else if(a == '?'){
         if(pq.empty()) cout << -1 << endl;
         else{
            cout << pq.top() << endl;
            pq.pop();
         }

      }
      
   }

   return 0;
}