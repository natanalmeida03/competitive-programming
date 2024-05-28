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
     string x; cin >> x;
     string k; cin >> k;

     int p = 0;
     for(int i = 0; i < k.length(); i++){
          if(x[p] == k[i]){
               cout << i+1 << " ";
               p++;
          }
     }
     return 0;
}