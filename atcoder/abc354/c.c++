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
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     int n; cin >> n;

     vector<pii> c;
     set<int> p;
     for(int i = 0; i < n; i++){
          p.insert(i);
          int a, b; cin >> a >> b;
          c.pb({a, b});
     }
     int r = 0;

     auto it1 = p.begin();
     while (it1 != p.end()) {
          int r1 = 0, r2 = 0;;
          auto it2 = p.begin();
          while (it2 != p.end()) {
               if (it1 != it2) {
                    int x = *it1;
                    int y = *it2;
                    if ((c[x].f < c[y].f && c[x].s > c[y].s)){
                         it1 = p.erase(it1);
                         r++;
                         r1 = 1;
                    }else if (c[x].f > c[y].f && c[x].s < c[y].s) {
                         it2 = p.erase(it2);
                         r++;
                         r2 = 1;
                    }
               }
               
               if (!r2) it2++;
          }
          if (!r1) it1++;
     }

     cout << n - r << endl;
     for(auto k : p)
          cout << k+1 << " ";

     cout << endl;
     return 0;
}
