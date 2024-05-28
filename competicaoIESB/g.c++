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
     int t; cin >> t;

     vector<char> s1(t), s2(t);

     for(auto &x : s1) cin >> x;
     for(auto &x : s2) cin >> x;

     int ans = 0;
     for(int i = 0; i < t; i++)
          if(s1[i] == s2[i]) ans++;

     cout << setprecision(10) << fixed << 100.0*ans/t << endl;

     return 0;
}