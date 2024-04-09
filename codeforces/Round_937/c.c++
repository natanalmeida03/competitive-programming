#include <bits/stdc++.h>

using namespace std;

int main() {
     int t; cin >> t;

     while(t--){
          string s; cin >> s;
          string sh = s.substr(0, 2);
          string sm = s.substr(2 + 1);
          int h = stoi(sh);
          int m = stoi(sm);

          if(h == 0)
               cout << 12 << ":" << setw(2) << setfill('0') << m << " AM\n";
          else if(h == 12)
               cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << " PM\n";
          else if(h < 12)
               cout << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m << " AM\n";
          else
               cout << setw(2) << setfill('0') << h - 12 << ":" << setw(2) << setfill('0') << m << " PM\n";

     }
}