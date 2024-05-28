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
     int n; cin >> n;
     vector<int> v(5, 0);

     for(int i = 0; i < n; i++) {
          int a; cin >> a;
          v[a]++;
     }

     int ans = 0;
     int c = min(v[3], v[1]);
     v[4] += c;
     v[3] -= c;
     v[1] -= c;

     v[2] += v[1]/2;
     v[1] -= 2*(v[1]/2);

     v[4] += v[2]/2;
     v[2] -= 2*(v[2]/2);

     c = min(v[2], v[1]);
     v[3] += c; 
     v[2] -= c; 
     v[1] -= c;



     cout << v[4] + v[3] + v[2] + v[1] << endl;

     return 0;
}