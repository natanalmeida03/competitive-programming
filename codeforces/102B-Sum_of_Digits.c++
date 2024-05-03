#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define I(x) int x; cin >> x
#define f first
#define s second


int main() { _
     string x; cin >> x;
     ll n;
     if(x == "0")
          cout << 0 << endl;
     else{
          int ans = 0;
          while(x.length() != 1){
               n = 0;
               for(int i = 0; i < x.length(); i++)
                    n+= x[i]-'0';
               
               x = to_string(n);
               ans++;
          }
          cout << ans << endl;
     }

     return 0;
}