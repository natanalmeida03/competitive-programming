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

const int MOD = 1e8;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll multmod(int n, int x){ return (((n-1)*(x))%MOD);}
unsigned long long mult(int n, int x){ return (((n-1))*(x));}

int main() { _
     int n; cin >> n;
     unsigned long long sum = 0;

     vector<int> v;
     for(int i = 0; i < n; i++){
          int a; cin >> a;
          sum += mult(n, a);
          v.pb(a);
     }

     sort(all(v));
     int k = n - 1;
     int j = 0;
     for(int i = 0; i < n; i++){
          while(k > 0 and v[i] + v[k] >= MOD) k--;
          sum -= MOD*(n-k-1*)
     }
     

     cout << sum << endl;
     return 0;
}