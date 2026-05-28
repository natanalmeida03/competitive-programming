//https://moj.naquadah.com.br/new/treino/problem/?id=obi-problems.obi2023f1pj_premio
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

   int p, d, b; cin >> p >> d >> b;
   int sum = p + (2*d) + (3*b);

   if(sum >= 150) cout << "B\n";
   else if(sum >= 120) cout << "D\n";
   else if(sum >= 100) cout << "P\n";
   else cout << "N\n";
   
   return 0;
}