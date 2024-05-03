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

          vector<int> g;
          int ma = 0;
          for(int i = 1; i < n; i++){
               int a; cin >> a;
               ma = max(ma, a);
               g.emplace_back(a);
          }

          int t = 10000;
          cout << t;
          for(int i = 0; i < n-1; i++){
               t += g[i];
               cout << " " << t;
          }
          cout << endl;
     }
}