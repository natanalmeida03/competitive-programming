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
     int q; cin >> q;
     
     vector<int> d(n+1, 1);
     int c = n;
     while(q--){
          int a; cin>> a;

          if(d[a] == 1){
               d[a] = 0;
               c--;
          }else{
               d[a] = 1;
               c++;
          }
     }

     cout << c << endl;

     return 0;
}