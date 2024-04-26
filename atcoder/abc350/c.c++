#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int n; cin >> n;
     vector<int> v;
     vector<pii> p;
     
     int t = n;
     while(t--){
          int a; cin >> a;
          v.emplace_back(a);
     }
     int i = 1, j = 0;
     int r = 0;
     while(j < n){
          if(v[j] != i){
               p.emplace_back(v[v[j]-1], v[j]);
               swap(v[j], v[v[j]-1]);
               r++;
          }
          else{
               i++;
               j++;
          }
     }
     
     reverse(all(p));
     cout << r << endl;
     for(auto &[x,y] : p)
          cout << x << " " << y << endl;
     
     return 0;
}