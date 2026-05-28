//https://moj.naquadah.com.br/new/treino/problem/?id=eda2-problems.fuga-do-labirinto
#include <stdio.h>
#include <limits.h>

int m, n;
int xi, yi;
char g[101][101];
int ans;

int mov[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

int check(int x, int y, int i, int j) {
   return (x+i >= 0) && (x+i < m) && (y+j >= 0) && (y+j < n) && g[x+i][y+j] == '.';
}

int isborder(int x, int y) {
   return ((x==0) || (y==0) || (x==m-1) || (y==n-1)) && ((x!=xi) || (y!=yi));
}

void dfs(int x, int y, int px, int py, int d) {
   if (isborder(x, y)) {
      if (d < ans) ans = d;
      return;
   }

   for (int k = 0; k < 4; k++) {
      int i = mov[k][0], j = mov[k][1];
      if (check(x, y, i, j) && (x+i != px || y+j != py)) {
         dfs(x+i, y+j, x, y, d + 1);
      }
   }
}

int main() {
   scanf("%d %d", &m, &n);
   for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
         scanf(" %c", &g[i][j]);

   scanf("%d %d", &xi, &yi);

   ans = INT_MAX;
   dfs(xi, yi, -1, -1, 0);

   printf("%d\n", ans == INT_MAX ? -1 : ans);

   return 0;
}