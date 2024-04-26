#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {

     string s; cin >> s;

     string n = s.substr(3);

     int v = stoi(n);

     if(v < 316  and v >= 1)
          cout << "Yes\n";
     else if(v > 316 and v < 350)
          cout << "Yes\n";
     else 
          cout << "No\n";

     return 0;
}