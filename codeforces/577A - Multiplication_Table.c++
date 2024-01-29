#include <bits/stdc++.h>

using namespace std;

int main() {
     int n, x; cin >> n >> x;
     int res = 0;

     for(int i = 1; i <= n; i++)
     {
          // cout << x << " - " << n << "\n";
          if((x%i == 0) and (x/i <= n))
               res++;
     }
     cout << res << endl;
     return 0;
}