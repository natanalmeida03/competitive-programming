#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() { _
     int t; cin >> t;

     while(t--){
          int n, k; cin >> n >> k;

          if(n == k)
               cout << 1 << endl;
          else if(n == 1)
               cout << k << endl;
          else{
               k *= (n + k - 1) / k;

               int ans = k%n == 0? k/n: k/n+1;
               cout << ans << endl;
          }
     }
     return 0;
}