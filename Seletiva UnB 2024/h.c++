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
    stack<int> c1, c2;
    for(int i = 0; i < 5; i++){
        int a, b; cin >> a >> b;

        if(a == -1 and !c2.empty()) c2.pop();
        else if(a != -1) c1.push(a);

        if(b == -1 and !c1.empty()) c1.pop();
        else if(b != -1) c2.push(b);
    }

    int suma = 0, sumb = 0;
    while(!c1.empty()){
        suma += c1.top();
        c1.pop();
    }

    while(!c2.empty()){
        sumb += c2.top();
        c2.pop();
    }

    if(suma > sumb) cout << 1 << endl;
    else if(sumb > suma) cout << 2 << endl;
    else cout << 0 << endl;
    return 0;
}