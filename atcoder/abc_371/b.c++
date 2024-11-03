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

int main() { _
    int n, m; cin >> n >> m;
    map<int, int> v;
    for(int i = 0; i < m; i++){
        int a; cin >> a;
        char s; cin >> s;
        v[a]++;
        if(v[a] > 0 and s == 'M'){
            cout << "Yes\n";
            v[a] = -10000;
        }else{
            cout << "No\n";
        }
    }
    return 0;
}