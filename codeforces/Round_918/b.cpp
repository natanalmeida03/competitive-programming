#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;

    while(t--)
    {
        set<char> li = {'A', 'B', 'C'};
        vector<char> L = {'A', 'B', 'C'};
        char r = 'A';
        for(int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            vector<char> le;

            if(s[0] == '?' or s[1] == '?' or s[2] == '?')
            {
                for(int j = 0; j < 3; j++)
                {
                    for( int k = 0; k < 3; k++)
                    {
                        if(s[j] == L[k])
                            li.erase(L[k]);
                    }
                }
            }
        }

        cout << *li.begin() << "\n";
    }
    return 0;
}