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

    if(s[0] == 'A' or s[1] == 'A' or s[2] == 'A')
        if(s[0] == 'B' or s[1] == 'B' or s[2] == 'B')
            if(s[0] == 'C' or s[1] == 'C' or s[2] == 'C')
                cout << "Yes\n";
            else
                cout << "No\n";
        else
            cout << "No\n";
    else
        cout << "No\n";
        

    
    return 0;
}