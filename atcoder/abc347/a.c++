#include <bits/stdc++.h>

using namespace std;

int main(){
     int n, k; cin >> n >> k;

     while(n--){
          int a; cin >> a;
          if(a % k == 0)
               cout << a / k << " ";
     }

     cout << "\n";
}