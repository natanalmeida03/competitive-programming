#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define f first
#define s second

int a, b;
int solve(int c){
    if(c%3==0) return a;
    if(c%3==1) return b;
    if(c%3==2) return a^b;
    return 0;
}

int main() { _
    
    int t; cin >> t;
    while(t--){
        int c; cin >> a >> b >> c;
        int ans = solve(c);
        cout << ans << endl;
    }

    return 0;
}