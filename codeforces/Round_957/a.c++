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
        vector<int> n(3);
        for(auto &c : n) cin >> c;

        sort(all(n));
        n[0] += 1;
        int p = 1, aux = n[0];

        int i = 4;
        while(i){
            if(p == 0){
                i--;
                n[p]++;
                aux = n[p];
            }else if(n[p] < aux){
                i--;
                n[p]++;

            }
            p++;
            p %= 3;
        }

        cout << n[0]*n[1]*n[2] << endl;
    }

    return 0;
}