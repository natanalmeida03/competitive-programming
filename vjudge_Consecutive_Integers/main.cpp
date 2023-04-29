#include <iostream>

using namespace std;

int main()
{
    int n = 0, x, verif, j = 0, auxnum = 0, tam;
    string s="", auxstr = "";

    while(n!=-1)
    {   
        int *dif;
        string *seq;

        cin>>n;

        if(n == -1){
            exit(0);
        }

        dif = new int[n+1];
        seq = new string[n+1];

        for(int i = 0; i <= n; i++)
        {   
            x = i;
            verif = 0;
            while((verif<n))
            {
                verif = verif + x;
                x++;
            }

            if((verif == n) && (i != 0))
            {
                //cout<<n<<" = "<<i<<" + ... + "<<x-1<<endl;

                dif[j] = x-i;
                seq[j] = s.append(to_string(n)).append(" = ").append(to_string(i)).append(" + ... + ").append(to_string(x-1));
                ++j;
                s="";
            } 
        }

        tam = sizeof(dif)/sizeof(0);

        for(int n = 0; n<= tam; ++n)
        {
            for(int m = n + 1; m<= tam-1; ++m)
            {
                if(dif[n] < dif[m])
                {   
                    auxnum = dif[m];
                    dif[m] = dif[n];
                    dif[n] = auxnum;
                    auxstr = seq[m];
                    seq[m] = seq[n];
                    seq[n] = auxstr;
                }
            }
        }

        cout<<seq[0]<<endl;
        delete[] dif;
        delete[] seq;
        j = 0;
    }
    return 0;
}