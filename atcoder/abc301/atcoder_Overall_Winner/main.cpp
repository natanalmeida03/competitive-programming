#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t = 0, a = 0;
    string s;

    cin >> n >> s;

    for(int i = 0; i < n; ++i)
    {
        if(s[i] == 'A'){
            ++a;
        }else{
            ++t;
        }

        if(n%2 == 0){
            if(a == (n/2)){
                cout << "A" << endl;
                return 0;
            }
            if(t == (n/2)){
                cout << "T" << endl;
                return 0;
            }
        }else{
            if(a == (n/2)+1){
                cout << "A" << endl;
                return 0;
            }
            if(t == (n/2)+1){
                cout << "T" << endl;
                return 0;
            }
        }
    }
}