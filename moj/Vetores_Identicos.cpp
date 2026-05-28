// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.fso-vetoresidenticos

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define fi first
#define se second

void task1(vector<int> &v1) {
   sort(all(v1));
}

void task2(vector<int> &v2) {
   sort(all(v2));
}

int main() { _
   
   int n; cin >> n;
   vector<int> v1(n),v2(n);
   for(auto &c : v1) cin >> c;
   for(auto &c : v2) cin >> c;

   thread t1(task1, ref(v1));
   thread t2(task2, ref(v2));

   t1.join();
   t2.join();

   for(int i = 0; i < n; i++) {
      if(v1[i] != v2[i]) return cout << "Diferentes\n", 0;
   }

   cout << "Mesmos elementos\n";
   return 0;
}