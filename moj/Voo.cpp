#include <bits/stdc++.h>
using namespace std;

int converte(string s) {
   int h = (s[0] - '0') * 10 + (s[1] - '0');
   int m = (s[3] - '0') * 10 + (s[4] - '0');
   return h * 60 + m;
}

int main() {
   string a, b, c, d;
   cin >> a >> b >> c >> d;

   int pA = converte(a);
   int cB = converte(b);
   int pB = converte(c);
   int cA = converte(d);

   int base1 = cB - pA;
   int base2 = cA - pB;

   int melhorD = INT_MAX, melhorF = 0;

   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         int t1 = base1 + i * 1440;
         int t2 = base2 + j * 1440;

         if ((t1 + t2) % 2 != 0) continue;

         int D = (t1 + t2) / 2;
         int F = (t1 - t2) / 2;

         if (D <= 0 || D >= 720) continue;
         if (F % 60 != 0) continue;

         int fusoHoras = F / 60;
         if (fusoHoras <= -12 || fusoHoras > 12) continue;

         if (D < melhorD) {
               melhorD = D;
               melhorF = fusoHoras;
         }
      }
   }

   cout << melhorD << " " << melhorF << endl;
   return 0;
}