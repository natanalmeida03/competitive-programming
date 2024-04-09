#include <bits/stdc++.h>

using namespace std;

int main(){
     int n; cin >> n;
     vector<int> b(n+1);
     const int m = 1000000009;
     vector<int> ver(m, m);

     for(int i = 0; i < n; i++){
          int v; cin >> v >> b[i];
          ver[b[i]] = min(ver[b[i]], v);
     }

     int res = 0;
     for(int i= 0; i < n; i++)
          res = max(res, ver[b[i]]);

     cout << res << "\n";
}