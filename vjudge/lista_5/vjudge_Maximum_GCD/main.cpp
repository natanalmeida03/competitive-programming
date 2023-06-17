#include <bits/stdc++.h>

using namespace std;
using ii = pair<int,int>;

int MDC(int a, int b){
  int resto;
 
  if(a==0||b==0)
		return a>0?b:a;
	do{
		resto=a%b;
		a=b;
		b=resto;
	}while(resto!=0);
 
  return a;
}

int main()
{
    int n;

    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        string linha;
        getline(cin, linha);
        istringstream iss (linha);
    }
}