#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define f first
#define s second

string sm1(string st, vector<int> &v){
     ll a = stoll(st);
     a++;
     st = to_string(a);
     v.clear();
     for(int i = 0; i < st.length(); i++)
          v.emplace_back(max(st[i]-'0', 1));

     return st;
}

int main() { _
     int t; cin >> t;

     while(t--){
          string st; cin >> st;
          vector<int> v;
          for(int i = 0; i < st.length(); i++)
               v.emplace_back(max(st[i]-'0', 1));
          

          while(true){
               ll n = stoll(st);
               int g = 1;

               for(int i = 0; i < st.length(); i++){
                    if(n%v[i] != 0){
                         g = 0;
                         break;
                    }
               }

               if(g == 1)
                    break;
               
               st = sm1(st, v);
          }

          cout << st << endl;
     }

     return 0;
}