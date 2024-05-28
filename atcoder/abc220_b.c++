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

ll convBase(string a, int b){
     ll ans = 0;
     for(auto &c : a){
          ans *= b;
          ans += c - '0';
     }

     return ans;
}
int main() { _
     int k; cin >> k;
     string a, b; cin >> a >> b;

     cout << convBase(a, k) * convBase(b, k) << endl;
     return 0;
}