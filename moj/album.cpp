//https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2018f1pj_album
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

   int n, m; cin >> n >> m;
   set<int> x;

   for(int i = 0; i < m; i++){
      int a; cin >> a;
      x.insert(a);
   }

   cout << n - x.size() << endl;

   return 0;
}