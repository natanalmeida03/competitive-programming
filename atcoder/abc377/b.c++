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
    vector<int> l = {0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> c = {0, 0, 0, 0, 0, 0, 0, 0};

    for(int i = 0; i < 8; i++){
        string s; cin >> s;
        for(int j = 0; j < 8; j++){
            if(s[j] == '#'){
                l[i] = 1;
                c[j] = 1;
            }
        }
    }

    int nl = 0, nc = 0;
    for(int i = 0; i < 8; i++){
        if(l[i] == 1) nl++;
        if(c[i] == 1) nc++;
    }
    int ans = 64 - (nl*8) - ((8-nl)*nc);
    cout << ans << endl;
    return 0;
}