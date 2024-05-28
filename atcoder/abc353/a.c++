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
     int n; cin >> n;

     int x; cin >> x;
     int ans = -1;
     for(int i = 1; i < n; i++){
          int a; cin >> a;

          if(a > x){
               ans = i+1;
               break;
          }
     }

     cout << ans << endl;
     return 0;
}