#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int main() { _
     int n; cin >> n;

     ll sum = 0;
     vector<string> m;
     for(int i = 0; i < n; i++){
          string a; cin >> a;
          int b; cin >> b;

          m.pb(a);
          sum += b;
     }
     sort(all(m));
     sum %= n;

     cout << m[sum] << endl;     
     return 0;
}