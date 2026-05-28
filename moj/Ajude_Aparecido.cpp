//https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.ajude_simplificado
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

   int a, b, c; cin >> a >> b >> c;
   int sum; cin >> sum;

   cout << (sum==(a+b+c)?("Acertou"):("Errou")) << endl;

   return 0;
}