#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() { _
     int t; cin >> t;

     while(t--){
          int n; cin >> n;

          if(n % 3 == 0)
               cout << n/3 << " " << n/3 << endl;
          else
               if((n/3)+1 + 2*(n/3) == n)
                    cout << (n/3)+1 << " " << (n/3) << endl;
               else
                    cout << (n/3) << " " << (n/3)+1 << endl;
     }
     return 0;
}