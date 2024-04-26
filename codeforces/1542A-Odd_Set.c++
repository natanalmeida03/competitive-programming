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
          vector<int> v(2*n);

          int p = 0, i = 0;

          for(auto &w : v){
               cin >> w;
               if(w & 1)
                    i++;
               else
                    p++;
          }

          if(i == p)
               cout << "Yes" << endl;
          else
               cout << "No" << endl;
     }
     return 0;
}