#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define C(x) int x; cin >> x
#define f first
#define s second

int main() { _
     C(t);

     while(t--){
          int x, y; cin >> x >> y;

          if(x >= y or (x == 2 and y == 3))
               cout << "YES" << endl;
          else if(x <= 3)
               cout << "NO" << endl;
          else
               cout << "YES" << endl;
     }
     return 0;
}