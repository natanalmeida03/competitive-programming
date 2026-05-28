// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.zerinho_um

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

   int a, b, c; cin >> a >> b >> c;

   if(a == b and a != c) return cout << "C\n", 0;
   else if (a == c and a != b) return cout << "B\n", 0;
   else if (b == c and b != a) return cout << "A\n", 0;

   cout << "empate\n";

   return 0;
}