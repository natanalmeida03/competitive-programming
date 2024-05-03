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
     int n, k; cin >> n >> k;

     int p = 1, c = 0;
     for(int i = 2; i <= n; i++){
          // cout << p << " " << n - i + 1 << endl;
          if(p - (n - i + 1) == k){
               c = n-i+1;
               break;
          }
          p+= i;
     }

     cout << c << endl;

     return 0;
}