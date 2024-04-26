#include <bits/stdc++.h>

using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
          int n, m; cin >> n >> m;
          int rx,ry; cin >> rx >> ry;
          int dx, dy; cin >> dx >> dy;

          int r = 0;

          if(rx > dx)
               r = (rx-dx) + 2*(n-rx);
          else if(rx < dx)
               r = dx - rx;
          else if(rx == dy)
               r = 0;

          if(ry > dy)
               r = min(r, ((ry-dy) + 2*(m-ry)));
          else if(ry < dy)
               r = min(r, dy-ry);
          else if(ry == dy)
               r = min(r, 0);

          cout << r << "\n";
     }
}