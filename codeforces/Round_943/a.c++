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

int main() { _
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          int m = 0, ans = 0;
          for(int i = 1; i < n; i++){
               if((gcd(i, n) + i) > m)
                    ans = i;
          }

          cout << ans << endl;
     }
     return 0;
}