#include <bits/stdc++.h>

using namespace std;

int main ()
{
     int n; cin >> n;
     int p; cin >> p;

     vector<int> levels(n, 0);
     while(p--)
     {
          int x; cin >> x;
          levels[x-1] = 1;
     }

     int q; cin >> q;
     while(q--)
     {
          int x; cin >> x;
          levels[x-1] = 1;
     }

     for(int i = 0; i < n; i++)
     {
          if(levels[i] == 0)
          {
               cout << "Oh, my keyboard!";
               return 0;
          }
     }

     cout << "I become the guy.";
}
