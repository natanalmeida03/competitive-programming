#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     string x; cin >> x;

     stack<char> st;
     for(auto &c : x){
          if(st.empty()) st.push(c);
          else{
               char t = st.top();

               if(t == c) st.pop();
               else st.push(c);
          }
     }

     st.empty() ? cout << "sim\n" : cout << "nao\n";
     return 0;
}