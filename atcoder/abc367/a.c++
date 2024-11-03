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
    int a, b, c; cin >> a >> b >> c;


    if(b > c){
        ((a >= b and  a <= 24)or (a >= 0 and a <= c))?cout << "No\n":cout << "Yes\n";
    }else
        (a >= b and a <= c)?cout << "No\n":cout << "Yes\n";
    
    return 0;
}