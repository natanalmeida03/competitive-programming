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
          vector<int> v(4);

          for(auto &w : v)
               cin >> w;

          int v1, v2;

          v1 = max(v[0], v[1]);
          v2 = max(v[2], v[3]);

          sort(all(v));

          if(v1+v2 == v[2] + v[3])
               cout << "YES" << endl;
          else 
               cout << "NO" << endl;
     }
     return 0;
}