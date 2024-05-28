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

const int MOD = 1e9+7;

unsigned long long exp(unsigned long long b, unsigned long long e){
     unsigned long long ans = 1;
     b %= MOD;

     while(e > 0){
          if(e & 1)
              ans = (ans*b)%MOD;
          
          e = e >> 1;
          b = (b * b) % MOD;
     }

     return ans;
}

int main() { _
     I(t);

     while(t--){
          unsigned long long a, b; cin >> a >> b;

          cout << exp(a, b) << endl;
     }
     return 0;
}