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
     int a, b; cin >> a >> b;
     int c; cin >> c;

     int ans = -1;
     for(int i = a; i <= b; i++)
          if(i % c == 0) ans = i;

     cout << ans << endl;
     return 0;
}