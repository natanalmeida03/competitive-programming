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
int dist[MAX][MAX];
pii pai[MAX][MAX];

string cam = "";

pii A;

vector<pii> mov = {{-1,0}, {1,0}, {0,-1}, {0,1}};

bool val(int i, int j){
     return i >= 0 and j >= 0 and i < n and j < m and vis[i][j] == 0 and g[i][j] != '#';
}

void ret_cam(int i, int j, int x){
     while(x--){
          if(pai[i][j].first - i == -1 and pai[i][j].second - j == 0)
               cam += "D";
          else if(pai[i][j].first - i == 1 and pai[i][j].second - j == 0)
               cam += "U";
          else if(pai[i][j].first - i == 0 and pai[i][j].second - j == -1)
               cam += "R";
          else if(pai[i][j].first - i == 0 and pai[i][j].second - j == 1)
               cam += "L";

          int w = i, z = j;
          i = pai[w][z].first;
          j = pai[w][z].second;
     }
}

int bfs(pii a){
     memset(dist, 0, sizeof dist);

     queue<pii> q;
     q.push(a);
     vis[a.first][a.second] = 1;
     dist[a.first][a.second] = 0;
     pai[a.first][a.second] = make_pair(0,0);

     while(!q.empty()){
          pii v = q.front();
          q.pop();
     	
          if(g[v.first][v.second] == 'B'){
               ret_cam(v.first, v.second, dist[v.first][v.second]);
               return dist[v.first][v.second];
          }

          for(auto [x,y] : mov){
               x += v.first; y += v.second;
               if(val(x, y)){
                    q.push({x, y});
                    vis[x][y] = 1;
                    dist[x][y] = dist[v.first][v.second]+1;
                    pai[x][y] = make_pair(v.first, v.second);
               }
          }
     }


     return -1;
}

int main() { _
     cin >> n >> m;

     for(int i = 0; i < n; i++)
          for(int j = 0; j < m; j++){
               char c; cin >> c;
               g[i][j] = c;
               if(c == 'A') A = make_pair(i, j);
          }

     int ans = bfs(A);

     if(ans == -1)
          cout << "NO" << endl;
     else{
          cout << "YES" << endl;
          cout << ans << endl;
          reverse(all(cam));
          cout <<  cam << endl;
     }

     return 0;
}