#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define I(x) int x; cin >> x
#define f first
#define s second

int main() { _
     I(t);

     while(t--){
          int x, y; cin >> x >> y;

          ll ans = (x*y)%3 == 0? (x*y)/3 : ((x*y)/3)+1;
          cout<< ans << endl;
     }
     return 0;
}