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
    string s; cin >> s;

    reverse(all(s));
    int t = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '.') {
            t++;
            break;
        }
        if(s[i] != '0') break;
        t++;
    }
    reverse(all(s));
    
    string ans = s.substr(0, s.length()-t);

    cout << ans << endl;
    return 0;
}