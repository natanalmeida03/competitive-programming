#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

const int MAX = 1e8+10;

int main() { _
     int t; cin >> t;

     while(t--){
          ll a, b; cin >> a >> b;
          
          if(b == 1){
               NO;
          }
          else{
               YES;
               cout << a * ((2*(ll)b)-1) << " " << a << " " << (a*(ll)b)*2 << endl;    
          }
     }
     return 0;
}