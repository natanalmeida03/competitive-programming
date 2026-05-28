// https://moj.naquadah.com.br/new/treino/problem/?id=moj-problems.edson-1238

#include <bits/stdc++.h>

using namespace std;

int main() {
   vector<int> fact = {1,1,2,6,24,120,720};

   string s;
   getline(cin, s);
   
   map<char,int> den;

   for(auto &c : s) 
      if(c != '/') den[c]++;

   int ans = 720, div = 1;

   for(auto &d : den) div *= fact[d.second];
   
   cout << ans/div << endl;
}