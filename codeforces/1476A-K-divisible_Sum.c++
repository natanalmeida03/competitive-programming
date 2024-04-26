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
          long long n, k; cin >> n >> k;

          if(n == k or k == 1)
               cout << 1 << endl;
          else if(n < k){
               if(k % n == 0)
                    cout << (k / n)<< endl;
               else
                    cout << (k / n)+1<< endl;
          }
          else
               if(n%k == 0)
                    cout << n/k << endl;
               else
                    cout << (n/k)+1 << endl;
     }
     return 0;
}