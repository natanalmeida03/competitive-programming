#include <bits/stdc++.h>

using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
          int n, a, b; cin >> n >> a >> b;

          int v2 = 0, v1 = 0;
          v1 = n * a;

          if(n % 2 == 0)
               v2 = n/2 * b;
          else
               v2 = ((n % 2) * a) + ((n/2) * b);
               
          (v1 > v2) ? cout << v2 << "\n" : cout << v1 << "\n";
     }
}