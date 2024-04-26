#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'
#define f0n(i, n) for(int i = 0; i < n; ++i)
#define f1n(i, n) for(int i = 1; i <= n; ++i)
#define NO cout << "NO" << "\n"
#define YES cout << "YES" << "\n"

int main() {
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          int aux = n;
          vector<int> v;

          while(aux--){
               int a; cin >> a;
               v.emplace_back(a);
          }

          sort(v.rbegin(), v.rend());

          int ve=1;

          f1n(i, n-1){
               if(abs(v[i] - v[i-1] )> 1){
                    NO;
                    ve = 0;
                    break;
               }
          }

          if(ve)
               YES;
     }
     return 0;
}