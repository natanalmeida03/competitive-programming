#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define I(x) int x; cin >> x
#define f first
#define s second

int main() { _
     I(n);
     string x; cin >> x;

     vector<int> l(26, 0), lc;

     for(int i = 0; i < x.length(); i++){
          l[x[i]-'a']++;
     }

     for(int i = 0; i < 26; i++)
          if(l[i] != 0){
               lc.emplace_back(i);
               if(l[i] % n != 0){
                    cout << -1 << endl;
                    return 0;
               }
          }

     for(int i = 0; i < n; i++)
          for(auto w : lc)
               cout << string(l[w]/n, char(w+'a')); 
          
     return 0;
}