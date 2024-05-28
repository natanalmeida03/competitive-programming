#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
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
     int t; cin >> t;

     while(t--){
          int ans = 0;
          string x; cin >> x;
          string aux = x;
          sort(all(aux));
          if(x == aux)
               cout << 1 << endl;
          else{
               int v01 = 0;
               char ca = x[0];
               for(int i = 0; i < x.length()-1; i++){
                    if(x.substr(i,2) == "01")
                         v01++;
               }

               for(int i = 1; i < x.length(); i++){
                    if(x[i] != ca){
                         ans++;
                         ca = x[i];
                    }
               }

               if(v01 >= 1)
                    cout << ans << endl;
               else
                    cout << ans + 1 << endl;
          }
     }
     return 0;
}