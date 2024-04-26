#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << #x << " => " << x << endl
#define all(x) x.begin(), x.end()

int main() { _
     int t; cin >> t;

     vector<int> v;
     for(int i = 1; i <= 2000; i++){
          if((i % 3 == 0) or (i % 10 == 3))
               continue;
          else
               v.emplace_back(i);
     }

     while(t--){
          int n; cin >> n;
          cout << v[n-1] << endl;
     }
     return 0;
}