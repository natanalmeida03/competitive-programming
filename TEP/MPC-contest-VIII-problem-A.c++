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

    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        if(n == 1){
            cout << 0 << endl;
            continue;
        }
        if(n == 2){
            cout << 1 << endl;
            continue;
        }

        if(n%2==0 or n == 3){
            cout << 2 << endl;
            
        }else{
            cout << 3 << endl;
        }
    }

    return 0;
}