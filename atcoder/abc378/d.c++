#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define so(x) sort(x.begin(), x.end())
#define rso(x) sort(x.rbegin(), x.rend())

int h, w, k;
ll ans = 0;
char g[11][11];
int vis[11][11];
vector<ii> mov = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int canmove(int i, int j){return (i>=0 and i < h and j >= 0 and j < w and g[i][j] != '#' and vis[i][j] == 0);}

void dfs(int i, int j, int l){
    if(l == k){
        ans++;
        return;
    }
    vis[i][j] = 1;

    for(auto [a, b] : mov){
        a+=i, b+=j;
        if(canmove(a, b)){
            dfs(a, b, l+1);
        }
    }

    vis[i][j] = 0;

}

int main() { _
    cin >> h >> w >> k;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            char a; cin >> a;
            g[i][j] = a;
        }
    }

    memset(vis, 0, sizeof vis);
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            if(g[i][j] == '.') dfs(i, j, 0);
            memset(vis, 0, sizeof vis);
        }
    }

    cout << ans << endl;

    return 0;
}