#include <bits/stdc++.h>

using namespace std;

int main (){
     string s; cin >> s;
     set<string> l;

     for(int i = 0; i <= s.length(); i++)
          for(int j = 1; j <= s.length() - i; j++){
               string aux = s.substr(i, j);
               l.emplace(aux);
               //cout << aux << "\n";
          }

     cout << l.size() << "\n";
}