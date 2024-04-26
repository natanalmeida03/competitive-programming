#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

int main() { _
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          ll sum = 0;

          for(int i = 0; i < n; i++){
               int a; cin >> a;
               sum += a;
          }
          
          if(sum < n)
               cout << 1 << endl;
          else
               cout << abs(n - sum) << endl;
     }
     return 0;
}