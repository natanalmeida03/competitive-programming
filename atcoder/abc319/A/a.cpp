#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string N;
    string p[10] = {"tourist","ksun48" ,"Benq" ,"Um_nik","apiad","Stonefeang","ecnerwala","mnbvmar","newbiedmy","semiexp" };
    int sp[10] = {3858, 3679, 3658, 3648, 3638, 3630, 3613, 3555, 3516, 3481};

    cin >> N;

    for(int i = 0; i < 10; ++i)
    {
        if(N == p[i])
        {
            cout << sp[i] << "\n";
            return 0;
        }           
    }

    return 0;
}