#include <bits/stdc++.h>

using namespace std;

int main (){
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          string s; cin >> s;
          s = " " + s + " ";

          vector<int> pmap, ppie, pmapie;

          int f = s.find("mapie");
          (f == -1) ? 0 : pmapie.emplace_back(f);

          while(f != -1){
               //cout << f << "\n";
               f = s.find("mapie", f+1);
               (f == -1) ? 0 : pmapie.emplace_back(f);
          }

          //------
          f = s.find("pie");
          (f == -1) ? 0 : ppie.emplace_back(f);


          while(f != -1){
               //cout << "pie" << "\n";
               f = s.find("pie", f+1);
               (f == -1) ? 0 : ppie.emplace_back(f);
          }


          //-----
          f = s.find("map");
          (f == -1) ? 0 : pmap.emplace_back(f);

          while(f != -1){
               //cout << "map" << "\n";
               f = s.find("map", f+1);
               (f == -1) ? 0 : pmap.emplace_back(f);
          }

          if(s.find("pie") == string::npos and s.find("map") == string::npos)
               cout << 0 << "\n";
          else{
               cout << ppie.size() + pmap.size() - pmapie.size() << "\n";
               // cout << ppie.size() << " + " << pmap.size() << " - " << pmapie.size() << "\n";
               // cout << "________________________________\n";
          }

     }
}