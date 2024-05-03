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
     int n; cin >> n;
     vector<string> s;
     char c, p;
     int v[n][n];
     memset(v, 0, sizeof v);
     for(int i = 0; i < n; i++){
          string a; cin >> a;
          s.pb(a);
     }
     c = s[0][0], p = s[0][1];
     if(c == p){
          cout << "NO" << endl;
          return 0;
     }
     for(int i = 0; i < n; i++){
          v[i][i] = 1;
          v[i][n-i-1] = 1;
          if(s[i][i] != c or s[i][n-i-1] != c){
               cout << "NO" << endl;
               return 0;
          }
          for(int j = 0; j < n; j++){
               if(v[i][j] == 0){
                    if(s[i][j] != p){
                         cout << "NO" << endl;
                         return 0;
                    }
               }
          }
     }

     cout << "YES" << endl;

     return 0;
}