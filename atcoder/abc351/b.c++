#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

int main() { _
     int n; cin >> n;

     vector<string> a, b;

     for(int i = 0; i < n; i++){
          string s; cin >> s;
          a.emplace_back(s);
     }

     for(int i = 0; i < n; i++){
          string s; cin >> s;
          b.emplace_back(s);
     }

     for(int i = 0; i < n; i++){
          for(int j = 0; j < n; j++){
               if(a[i][j] != b[i][j])
                    cout << i+1 << " " << j+1 << endl;
          }
     }
     return 0;
}