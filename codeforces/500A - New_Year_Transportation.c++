#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() { _
     int n, t; cin >> n >> t;

     int p = 1;
     for(int i = 1; i < n; i++){
          int a; cin >> a;

          if(i == p)
               p+= a;

          if(p == t){
               YES; 
               return 0;
          }
     }

     NO;
     return 0;
}