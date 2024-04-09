#include <bits/stdc++.h>

using namespace std;

int main() {
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          int j = 0;
          for(int i = 1; i <= n*2; i++){
               for(int k = 1; k <= n; k++)
               {
                    if(j == 0)
                         cout << "##";
                    else if(j == 1)
                         cout << "..";

                    j = 1 - j;
               }
               if((n == 1))
                    j = 1 - j;
               else if((i % 2 != 0) and (n % 2 != 0))
                    j = 1 - j;
               else if((i % 2 == 0) and (n % 2 == 0))
                    j = 1 - j;

               cout << "\n";
          }
     }
}