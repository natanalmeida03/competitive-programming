#include <bits/stdc++.h>

using namespace std;

int main(){
     int n; cin >> n;
     vector<pair<int,int>> p(n);

     for(int i = 0; i < n; i++){
          int x, y; cin >> x >> y;

          p[i].first = x;
          p[i].second = y;
     }

     for(auto [x1, y1] : p){
          vector<double> r;
          for(auto [x2, y2] : p){
               double d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2)*(y1 - y2));
               r.emplace_back(d);
          }
          int p = 1;
          double aux = r[0];
          for(int j = 1; j < r.size(); j++){
               if(r[j] > aux){
                    p = j+1;
                    aux = r[j];
               }
          }

          cout << p << "\n";
     }
}