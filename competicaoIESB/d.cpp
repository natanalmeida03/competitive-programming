#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int  n, a, rd=0, re =0;
 
    cin >> n;
 
    string nova, aux;
 
    vector <string> s1(n), s2(n);
 
    for(int i = 0; i < n; ++i)
    {
        cin >> s1[i] >> s2[i];
    }
 
    for(int i = 0; i < n; ++i)
    {
        a = 0;
        rd = 0;
        re = 0;

        aux = s1[i];
 
        do
        {
            nova = "";
            nova = s1[i][s1[i].length() - 1];
            for(int j = 0; j < (s1[i].length() - 1); ++j)
            {
                nova = nova + s1[i][j];
            }
 
            s1[i] = nova;
 
            rd++;
 
            if(nova == s2[i]) a = 1;
        }while(a == 0);

        s1[i] = aux;
        a = 0;

        do
        {
            nova = "";
            
            for(int j = 1; j < (s1[i].length()); ++j)
            {
                nova = nova + s1[i][j];
            }
            nova = nova + s1[i][0];
 
            s1[i] = nova;
 
            re++;
 
            if(s1[i] == s2[i]) a = 1;

        }while(a == 0);
 
        if(re == nova.length() or rd == nova.length()) cout << 0 << endl;
        else re > rd? cout << rd << endl: cout << re << endl;
 
    }
    return 0;
}