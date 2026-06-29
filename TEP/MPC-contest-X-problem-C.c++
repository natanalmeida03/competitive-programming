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

int main() { _

    int n; cin >> n;
    int ans = INT_MAX;
    for(int i = 1; i <= n; i++){
        int temp = (2*i)+(n%i==0?(2*(n/i)):((2*(n/i))+2));
        //cout << temp << " " << i << endl;
        ans = min(temp, ans);
    }

    cout << ans << endl;
    return 0;
}