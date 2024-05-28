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

const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     int t; cin >> t;

     while(t--){
          int a, b, c, d; cin >> a >> b >> c >> d;
          if(a > b)
               swap(a, b);
          if(c > d)
               swap(c, d);

          vector<int> p(12, 0), n(12, 1);
          for(int i = a-1; i < b; i++){
               p[i] = 1;
               n[i] = 0;
          }

          if((p[c-1] == 1 and p[d-1] == 0) or (p[d-1] == 1 and p[c-1] == 0) or (n[c-1] == 1 and n[d-1] == 0) or (n[d-1] == 1 and n[c-1] == 0))
               cout << "YES\n";
          else
               cout << "NO\n";
     }
     return 0;
}