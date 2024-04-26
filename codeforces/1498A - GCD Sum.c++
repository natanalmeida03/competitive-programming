#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define f0n(i, n) for(int i = 0; i < n; ++i)
#define f1n(i, n) for(int i = 1; i <= n; ++i)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl '\n'

ll sumDig(string x){
     ll r = 0;
     f0n(i, x.length())
          r+=(x[i] - '0');

     return r;
}
int main() {
     int t; cin >> t;

     while(t--){
          string n; cin >> n;
          string aux = n;
          ll mdc = 0, r = 0;

          while(1){
               mdc = gcd(stoll(n), sumDig(n));
               if(mdc != 1)
                    break;

               r++;
               ll a = stoll(n) + mdc;
               n = to_string(a);
          }

          cout << stoll(aux) + r << endl;
     }
     return 0;
}