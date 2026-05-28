#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
    int t; cin >> t;

    while(t--){
        string s1, s2; cin >> s1 >> s2;

        if(s1 == s2) cout << 0 << endl;
        else{
            s2 = s2 + s2;

            int x = s2.find(s1);
            int y = fabs(s1.length()-x);
            
            int ans = min(x, y);
            cout <<  ans << endl;
        }
    }
    return 0;
}