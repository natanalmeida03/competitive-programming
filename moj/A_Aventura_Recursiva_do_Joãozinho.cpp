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

int ans = 0;
string a;

void conta(int p=0){
   if(p >= a.size())
      return;
   
   if(a[p] == 'A' or a[p] == 'E' or a[p] == 'I' or a[p] == 'O' or a[p] == 'U') ans++;

   conta(++p);
}

int main() { _

   cin >> a;
   conta();

   cout << ans << endl;
   return 0;
}