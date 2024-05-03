#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;


#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

const int MAX = 1010;

int n, m;
char g[MAX][MAX];
bool vis[MAX][MAX];
vector<pii> mov = {{-1,0}, {1,0}, {0,-1}, {0, 1}};

bool val(int i, int j){
     return i>= 0 and j >= 0 and i < n and j < m and vis[i][j] == 0 and g[i][j] == '.';
}

void bfs(int i, int j){
     queue<pii> q;
     q.push({i,j});
     vis[i][j] = 1;

     while(!q.empty()){
          pii v = q.front(); 
          q.pop();

          for(auto [x, y] : mov){
               x += v.first;
               y += v.second;

               if(val(x, y)){
                    vis[x][y] = 1;
                    q.push({x,y});
               }
          }
     }
}

int main() { _ 
     cin >> n >> m;
     for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++){
               char c; cin >> c;
               g[i][j] = c;
          }
     }

     int ans = 0;
     for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
               if(g[i][j] == '.' and vis[i][j] == 0){
                    bfs(i, j);
                    ans++;
               }
          }
     }

     cout << ans << endl;
     return 0;
}