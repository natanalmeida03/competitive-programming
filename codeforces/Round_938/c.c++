#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
     int t; cin >> t;

     while(t--){
          ll n, k; cin >> n >> k;

          vector<ll> a;

          for(ll i = 0; i < n; i++){
               ll x; cin >> x;
               a.emplace_back(x);
          }
          //cout << "TAMA INI: " << a.size() << "\n";

          ll aux, r = 0;

          while(true){
               aux = a.size() - 1;
               if(aux < 0)
                    break;
               ll sum;
               sum += a[aux] + a[0];

               if(sum < k){
                    if(a[aux - 1] == a[0]){
                         a.erase(a.begin() + 0);
                         r++;
                         aux = a.size() - 1;
                         a.erase(a.begin() + aux);
                         r++;

                         k-= sum;
                    }else if(a[aux - 1] < a[0]){
                         ll f = a[aux];
                         a.erase(a.begin() + aux);
                         r++;
                         a[0] -= f;

                         k-= 2*f;
                    }else if(a[aux - 1] > a[0]){
                         ll f = a[0];
                         a.erase(a.begin() + 0);
                         r++;
                         aux = a.size() - 1;
                         a[aux] -= f;

                         k-= 2*f;
                    }
               }else if(sum >= k){
                    a[0]--;
                    if(a[0] == 0){
                         r++;
                         a.erase(a.begin() + 0);
                    }
                    k--;
                    if(k == 0)
                         break;
                         
                    aux = a.size() - 1;
                    a[aux]--;
                    if(a[aux] == 0){
                         r++;
                         a.erase(a.begin() + aux);
                    }
                    k--;
                    if(k == 0)
                         break;
               }

          }

          cout << r << "\n";
     }
}