#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define F first
#define S second

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     int t; cin >> t;

     while(t--){
          int n; cin >> n;

          int sum, ans = 0, r = 0;
          int x = 1;
          for(int i = 2; i <= 100; i++){
               sum = 0;
               x = 1;
               while(x*i <= n){
                    sum += x*i;
                    x++;
               }

               if(sum > ans){
                    ans = sum;
                    r = i;
               }
          }

          cout << r << endl;
     }
     return 0;
}