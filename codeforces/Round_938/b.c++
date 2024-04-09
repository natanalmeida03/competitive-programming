#include <bits/stdc++.h>

using namespace std;

int main (){
     int t; cin >> t;

     while(t--){
          int n, c, d; cin >> n >> c >> d;
          vector<int> v;

          int aux = -1;

          for(int i = 0; i < n * n; i++){
               int x; cin >> x;
               if(x < aux or aux == -1)
                    aux = x;
               v.emplace_back(x);
          }
          
          sort(v.begin(), v.end());

          vector<int> k;

          for(int i = 0; i < n; i++){
               int m = 0;
               for(int j = 0; j < n; j++){
                    k.emplace_back(aux + m);
                    m += d;
               }

               aux += c;
          }
          
          // cout << "VETOR V:\n";
          // for(auto c : v)
          //      cout << c << " ";

          // cout << "\nVETOR K:\n";
          // for(auto c : k)
          //      cout << c << " ";
          
          sort(k.begin(), k.end());

          (v == k) ? cout << "YES\n" : cout << "NO\n";
     }
}