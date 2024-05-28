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
     int n, k; cin >> n >> k;

     map<int,int> m;
     for(int i = 0; i < n; i++){
          int a; cin >> a;
          if(m.count(a))
               return cout << m[a] + 1<< " " << i+1 << endl, 0;
          
          m[k-a] = i;
     }

     cout << "IMPOSSIBLE\n";
     return 0;
}