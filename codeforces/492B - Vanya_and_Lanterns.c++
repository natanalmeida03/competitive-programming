#include <bits/stdc++.h>

using namespace std;

int main() {
     cout << setprecision(10);
     int n, l; cin >> n >> l;
     vector<int> a;

     while(n--)
     {
          int v; cin >> v;
          a.emplace_back(v);
     }
     sort(a.begin(), a.end());

     double mx = a[0];
     double t;
     for(int i = 1; i < a.size(); i++)
     {
          // cout << a[i] << " - " << a[i - 1] << " = ";
          // cout << a[i] - a[i - 1] << "\n";
          t = ((1.0 * a[i]) - (1.0 * a[i - 1]))/2;
          mx = max(mx, t);
     }

     t = (l - a[a.size() - 1]);
     mx = max(mx, t);
     
     cout << mx << "\n";
     return 0;
}