#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()

const int MAX = 1010;

char g[MAX][MAX];
char gn[MAX][MAX];
bool vis[MAX][MAX];


vector<pii> mov = {{-1,0},{1,0},{0,-1},{0,1}};

int n, m;
bool val(int i, int j){
     return i >= 0 and j >= 0 and i < n and j < m and vis[i][j] == 0 and g[i][j] != '#';
}

bool val2(int i, int j){
     return gn[i][j] == '#';
}

int bfs(int i, int j){
     memset(vis, 0, sizeof vis);
     queue<pii> q;
     q.push({i,j});
     vis[i][j]=1;

     int c = 0;
     while(!q.empty()){
          pii v = q.front(); 
          q.pop();

          c++;
          for(auto [x, y] : mov){
               x += v.first; y+= v.second;
               if(val(x,y)){
                    if(g[x][y] == '.'){
                         q.push({x, y});
                         vis[x][y]=1;
                    }
                    else if (g[x][y] == '@'){
                         vis[x][y] = 1;
                         c++;
                    }
               }
          }
     }

     return c;
}

int main() { _
     cin >> n >> m;

     for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
               char s; cin >> s;
               gn[i][j]=s;
          }
     }

     for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
               if(gn[i][j] == '#')
                    g[i][j] = '#';
               else{
                    int v = 1;
                    for(auto [x, y] : mov){
                         x+= i; y += j;
                         if(val2(x, y)){
                              g[i][j] = '@';
                              v = 0;
                         }
                    }
                    if(v == 1){
                         g[i][j] = '.';
                    }
               }
          }
     }
     int ans = 0;
     for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
               if(g[i][j] == '.'){
                    int x = bfs(i, j);
                    // cout << x << " <== (" << i << ", " << j << ")\n";
                    ans = max(ans, x);
               }
               if(g[i][j] == '@')
                    ans = max(ans, 1);
          }
     }

     cout << ans << endl;
     return 0;
}