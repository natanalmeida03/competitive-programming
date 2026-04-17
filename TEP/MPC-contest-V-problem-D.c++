#include <bits/stdc++.h>

using namespace std;

int main(){
   int n, x, y; cin >> n >> x >> y;
   string s; cin >> s;
   reverse(s.begin(), s.end());

   int ans = 0;
   for(int i = 0; i < x; i++){
      auto c = s[i];
      if(i <= y){
         if(i == y and c == '0') ans++;
         else if(i < y and c == '1') ans++;
      }else if (c == '1') ans++;
   }

   cout << ans << endl;
}