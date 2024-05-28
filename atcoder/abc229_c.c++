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
     int n, w; cin >> n >> w;

     ll sum = 0;
     map<int, int> m;
     set<int> st;
     for(int i = 0; i < n; i++){
          int a, b; cin >> a >> b;
          sum += b;
          m[a] += b;
          st.insert(a);
     }

     if(sum <= w)
          cout << w << endl;
     else{
          map<int,int>::reverse_iterator it;
          ll ans = 0;
          for(it=m.rbegin(); it!= m.rend(); ++it){
               ll p = min(w, it->s);
               ans += it->f * p;

               w -= p;
               if(w == 0)
                    break;
          }

          cout << ans << endl;
     }
     return 0;
}