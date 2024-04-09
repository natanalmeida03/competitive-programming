#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> vec) {
     int median = vec.size()/2;
     cout << vec[median/2] << "\n";
}

int main(){
     int n; cin >> n;
     for(int i = 0; i < n; ++i) {
          int t; cin >> t;
          vector<int> aux;
          for(int j = 0; j < t; ++j) {
               int a; cin >> a;
               aux.push_back(a);
          }
     }
}