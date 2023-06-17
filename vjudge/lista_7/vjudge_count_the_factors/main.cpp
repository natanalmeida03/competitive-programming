#include <bits/stdc++.h>

using namespace std;

void removeDuplicates(int div[], int n, int numb)
{
  
    int i, c = 0;
    set<int> s;

    for (i = 0; i < n; i++) {
        s.insert(div[i]);
    }
  
    set<int>::iterator it;

    for (it = s.begin(); it != s.end(); ++it)
        c++;

    cout << numb << " : " << c << endl;

}

int numdiv(int num)
{
    int x = 2, c = 0, div[500001], m;
    m = num;

    if(num == 0) exit(0);

    while (num != 1) {
        if (!(num%x)) {
            div[c] = x;
            c++;
            num /= x;
        }
        else x++;
    }

    //int n = sizeof(div) / sizeof(div[0]);
    
    removeDuplicates(div, c, m);

    return 0;

}

int main()
{
    int n;

    do
    {       
    cin >> n;

    numdiv(n);
    //cout << "res = " << numdiv(n) << endl;

    }while(true);
}