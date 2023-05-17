#include <bits/stdc++.h>

using namespace std;

/*
int main()
{
    int n, s[110], c;

    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }

    for(int j = 0; j < n; ++j){
        if(abs(s[j] - s[j+1]) == 1)
        {
            for(int t = j; t < n; ++t)
                cout << s[t] << " ";

            return 0;
        }
        c = abs(s[j] - s[j+1]);
        if(s[j] < s[j+1]){
            cout << s[j] << " ";
            for(int t = 1; t < c; ++t){
                cout << s[j] + t << " ";
            }
            
            
        }else{
            cout << s[j] << " ";
            for(int t = 1; t < c; ++t){
                cout << s[j] - t << " ";
            }
            
            
        }
    }
}
*/

int main ()
{

    int n, a, b;
    string fn;
    cin >> n >> a;

    for(int j = 0; j < n; ++j)
    {
        cin >> b;
        cout << a << ' ';
        if (a < b)
            for (int i = a + 1; i < b; i++)
                cout << i << ' ';
        else if (a > b)
            for (int i = a - 1; i > b; i--)
                cout << i << ' ';

        a = b;
    }
}