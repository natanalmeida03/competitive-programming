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
     int n, x, y, z; cin >> n >> x >> y >> z;

     if((z >= x and z <= y) or (z <= x and z >= y))
          cout << "Yes\n";
     else
          cout << "No\n";
     return 0;
}