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

map<int, int> div(int a){
    map<int, int> res;
    for(int i = 2; i * i <= a; i++){
        if(a%i==0){
            while(a%i==0){
                res.count(i)?res[i]++:res[i]=1;
                a /= i;
            }
        }
    }

    return res;

}
int main() { _

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &c : v) cin >> c;

        for(int c : v){
            map<int, int> a = div(c);
        }

    }

    return 0;
}