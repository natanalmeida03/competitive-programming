#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     int t; cin >> t;

     while(t--){
          int n, m; cin >> n >> m;
          int x = 0, y = 0;
          int t = 0, c = 0;
          for(int i = 0; i < n; i++){
               string s; cin >> s;
               int p = s.find('#');
               if(y == 0 and p != -1){
                    y = p + 1;
                    c = i+1;
               }
               
               
               if(p != -1)
                    t++;
               
          }

          cout << c + t/2 << " " << y << endl;
     }
     return 0;
}