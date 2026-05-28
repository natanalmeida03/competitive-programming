// https://moj.naquadah.com.br/new/treino/problem/?id=problemas-apc.idades_mais_velha

#include <stdio.h>

int main() {
   int n = 0, a, soma = 0, ol = -1, p = 0;

   while (n < 80 && scanf("%d", &a) == 1 && a != -1) {
      soma += a;
      if (a > ol) {
         ol = a;
         p = n;
      }
      n++;
   }

   if(soma == 0) {
      printf("0\n0 0\n");
      return 0;
   }

   printf("%d\n%d %d\n", soma / n, ol, p);
   return 0;
}