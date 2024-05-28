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
     int h; cin >> h;

     int ans = 1;
     ll r = 1;
     int b = 2;

     while(r <= h){
          ans++;
          r += b;
          b*= 2;
     }

     cout << ans << endl;
     return 0;
}