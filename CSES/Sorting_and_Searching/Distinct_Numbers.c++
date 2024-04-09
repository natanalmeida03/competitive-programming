#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
     ll n, r = 0, aux;
     cin >> n;
     vector<ll> a;

     aux = n;

     while(aux--){
          ll x;
          cin >> x;
          a.push_back(x);
     }

     sort(a.begin(), a.end());

     for(ll i = 1; i <= n; i++){
          if(a[i-1] != a[i])
               r++;
     }

     cout << r << "\n";
}