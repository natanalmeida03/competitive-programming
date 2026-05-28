//https://moj.naquadah.com.br/new/treino/problem/?id=eda2-problems.fuga-do-labirinto

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

int m, n;
int xi, yi;
char g[101][101];

vector<pii> mov = {{1,0}, {-1,0}, {0,1}, {0,-1}};
int ans = INT_MAX;

bool check(int x, int y, int i, int j){return ((x+i >= 0) and (x+i < m) and (y+j >= 0) and (y+j < n) and g[x+i][y+j] == '.');}

bool isborder(int x, int y){return (((x==0) or (y==0) or (x==m-1) or (y==n-1)) and ((x!=xi) or (y!=yi)));}

void dfs (int x, int y, int px, int py, int d = 0){

   if(isborder(x, y)){
      ans = min(ans, d);
      return;
   }

   for(auto &p : mov) {
      int i = p.first, j = p.second;
      if(check(x, y, i, j) and ((x+i != px) or (y+j != py))){
         dfs(x+i, y+j, x, y, d + 1);
      }
   }
}

int main() { _

   cin >> m >> n;
   for(int i = 0; i < m; i++){
      for(int j = 0; j < n; j++){
         char a; cin >> a;
         g[i][j] = a;
      }
   }

   cin >> xi >> yi;

   dfs(xi, yi, -1, -1);

   cout << (ans==INT_MAX?(-1):ans) << endl;

   return 0;
}