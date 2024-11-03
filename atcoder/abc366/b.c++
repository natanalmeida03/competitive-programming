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
    int n; cin >> n;
    vector<string> s;
    int l = 0;
    for(int i = 0; i < n; i++){
        string a; cin >> a;
        s.eb(a);
        int t = a.length();
        l = max(l, t);
    }

    string ans;
    int v = 0;
    for(int i = 0; i < l; i++){
        for(int j = n-1; j >= 0; j--){
            string a = s[j];
            if(i+1 > a.length())
                ans += "*";
            else
                ans += a[i];
        }

        string aux = ans;
        reverse(all(aux));
        for(int i = 0; i < aux.length(); i++){
            if(aux[i] != '*'){
                aux = aux.substr(i, aux.length()-i);
                reverse(all(aux));
                ans = aux;
                break;
            }
        }
        cout << ans << endl;
        ans = "";
    }
    return 0;
}