#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define C(x) int x; cin >> x
#define f first
#define s second

int main() { _
     C(t);


     while(t--){
          string st; cin >> st;

          vector<int> l(26, 0);
          int p, c;
          for(int i = 0; i < st.length(); i+=max(c, 1)){
               c = 1, p = i+1;
               while(st[i] == st[p]){
                    // cout << st[i] << " " << st[p] << endl;
                    c++;
                    p++;
               }

               if(c&1){
                    l[st[i]-'a'] = 1;
               }
          }

          for(int i = 0; i < 26; i++)
               if(l[i] == 1)
                    cout << char('a'+i);

          cout << endl;
     }
     return 0;
}