#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    int n; cin >> n;

    while(n--){
        string s, x; cin >> s >> x;

        vector<int> v(27);
        for(auto c : s) v[c - 'a']++; 

        char ans;
        for(auto c : x){
            if(v[c - 'a'] > 0) v[c-'a']--;
            else ans = c;
        }

        cout << ans << endl;
    }
    return 0;
}