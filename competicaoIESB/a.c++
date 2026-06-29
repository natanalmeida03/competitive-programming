#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define fi first
#define se second

int inverso(int l){
   int q = (l/10) + ((l%10)*10);
   return q;
}

int main() { _

   int n; cin >> n;
   map<string, int> p;

   for(int i = 0; i < n; i++){
      string a; int b; cin >> a >> b;
      p[a] = b;
   }

   int anos = 0;
   while(p.size() > 1){
      for(auto i = p.begin(); i != p.end(); i++){
         string a = i->first; int b = i->second;
         for(auto j = i; j != p.end(); j++){
            string c = j->first; int d = j->second;

            int e = inverso(b);
            if(a == c) continue;
            if(e == d) cout << "Em " << anos << " anos " << a << " faz " << b << " e " << c << " " << d << endl; 
         }
      }
      anos++;
      vector<string> vei;
      for(auto &[a, b]:p) {
         b++;
         if(b > 99) vei.eb(a);
      }

      for(auto &c : vei){
         p.erase(c);
      }
   }

   return 0;
}