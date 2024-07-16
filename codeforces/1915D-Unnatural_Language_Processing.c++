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
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;

        string ans;
        int j = 3;
        for(int i = n-1; i >= 0; i-= j){
            if(s[i] == 'a' or s[i] == 'e') j = 2;
            else j = 3;
            
            string sub = s.substr(i-j+1, j);
            ans = sub + "." + ans;
        }

        for(int i = 0; i < ans.length()-1; i++)
            cout << ans[i];

        cout << endl;
    }
    return 0;
}