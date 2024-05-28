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
     int n, k; cin >> n >> k;

     vector<int> v;

     for(int i = 0; i < n; i++){
          int a; cin >> a;
          v.pb(a);
     }

     int ans = 0;
     int oc = 0;
     for(auto &c : v){
          oc += c;
          if(oc > k){
               ans++;
               oc = c;
          }
     }

     cout << ans + 1<< endl;
     return 0;
}