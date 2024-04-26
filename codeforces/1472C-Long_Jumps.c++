#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define debug(x) cout << x << "\n"
#define all(x) x.begin(), x.end()
#define endl '\n'

const int MAX = 1e8+10;

int main() { _
     int t; cin >> t;
     
     debug(t);
     while(t--){
          int n; cin >> n;

          vector<int> g(n);

          for(int i = 1; i <= n; i++){
               int a; cin >> a;
               g[i] = a;
          }

          vector<int> v(n, 0);
          for(int i = n; i >= 1; i--){
               v[i] = g[i];
               int x = i + g[i];
               if(x < n)
                    v[i] += v[x];

          }

          cout << *max_element(all(v)) << endl;
     }
     return 0;
}