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
#define so(x) sort(x.begin(), x.end())
#define rso(x) sort(x.rbegin(), x.rend())

int main() { _
    int n; cin >> n;
    map<int, int> m;

    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(m[a])cout << m[a] << " ";
        else cout << "-1 ";

        m[a] = i+1;
    }
    return 0;
}