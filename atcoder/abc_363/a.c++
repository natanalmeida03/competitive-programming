#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

void solve() {

}

int main() { _
    int r; cin >> r;

    if(r < 100) cout << 100 - r << endl;
    else if(r < 200) cout << 200 - r << endl;
    else cout << 300 - r << endl;
    return 0;
}