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

    int q; cin >> q;
    while(q--){
        vector<long long> n(3);
        long long ans = INT_MAX;

        for(auto &c : n) cin >> c;
        sort(all(n));

        int p1 = -1, p2 = -1, p3 = -1;
        long long a = n[0], b = n[1], c = n[2];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                for(int k = 0; k < 3; k++){
                    //cout << a+p1 << " " << b+p2 << " " << c+p3 << endl;
                    ans = min(abs((a+p1)-(b+p2))+abs((c+p3)-(a+p1))+abs((c+p3)-(b+p2)), ans);
                    p3++;
                }
                p2++;
                p3 = -1;
            }
            p1++;
            p2 = -1;
        }

        cout << ans << endl;

    }

    return 0;
}