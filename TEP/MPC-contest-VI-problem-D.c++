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

int gcd(ll a, ll b){
    if(a == b) return a;
    if(a < b) swap(a, b);

    return gcd(a-b, b);
}

int main() { _

    int n; cin >> n;
    if(n == 1){
        cout << "No\n";
        return 0;
    }
    pair<int,ll> a, b;
    vector<int> x, y;
    a.first = 0; a.second = 0; b.second = 0; b.first = 0; 
    for(int i = 1; i <= n; i++){
        if(i%2==0){
            b.first++;
            b.second+=i;
            y.push_back(i);
        }else{
            a.first++;
            a.second+=i;
            x.push_back(i);
        }
    }

    if(gcd(a.second, b.second) > 1){
        cout << "Yes" << endl;
        cout << b.first << " ";
        for(auto &c : y) cout << c << " ";
        cout << endl;
        cout << a.first << " ";
        for(auto &c : x) cout << c << " ";
        cout << endl;
    }else{
        cout << "No\n";
    }



    return 0;
}