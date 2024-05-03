#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

int main() { _
     int suma=0, sumb = 0;

     for(int i = 0; i < 9; i++){
          int a; cin >> a;
          suma+= a;
     }

     for(int i = 0; i < 8; i++){
          int a; cin >> a;
          sumb+= a;
     }

     cout << suma-sumb+1 << endl;

     return 0;
}