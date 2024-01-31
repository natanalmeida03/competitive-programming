#include <bits/stdc++.h>

using namespace std;

int main() {
     string s; cin >> s;
     int salto = 1;

     for(int i = 0; i < s.length(); i+= salto)
     {
          if(s[i] == '.')
          {
               cout << "0";
               salto = 1;
          }
          if(s[i] == '-'){
               if(s[i+1] and s[i+1] == '-')
               {
                    cout << "2";
                    salto = 2;
               }else if(s[i+1] and s[i+1] == '.')
               {
                    cout << "1";
                    salto = 2;
               }
          }
     }
     cout << "\n";
     return 0;
}