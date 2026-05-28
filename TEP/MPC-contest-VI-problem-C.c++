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

    ll x, y; cin >> x >> y;
    auto a = abs(x), b = abs(y);
    pair<ll,ll> c1,c2;
    if(x < 0 and y < 0){
        c1.first = -1*(a+b);
        c1.second = 0;
        c2.first = 0;
        c2.second = -1*(a+b);
    }else if(x < 0 and y > 0){
        c1.first = -1*(a+b);
        c1.second = 0;
        c2.first = 0;
        c2.second = (a+b);
    }else if(x > 0 and y < 0){
        c1.first = (a+b);
        c1.second = 0;
        c2.first = 0;
        c2.second = -1*(a+b);
    }else if(x > 0 and y > 0){
        c1.first = (a+b);
        c1.second = 0;
        c2.first = 0;
        c2.second = (a+b);
    }
    
    if(c1.first < c2.first){
        cout << c1.first << " " << c1.second << " " << c2.first << " " << c2.second << endl;
    }else{
        cout << c2.first << " " << c2.second << " " << c1.first << " " << c1.second << endl;
    }

    

    return 0;
}