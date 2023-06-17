#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, c;
    ll age[102], minage;
    string name[102];
    vector<pair<ll, string>> cj;

    cin >> n;

    minage = 1000000000;

    for(int i = 0; i < n; ++i)
    {
        cin >> name[i] >> age[i];
        if(age[i] < minage) 
        {
            minage = age[i];
            c = i;
        }
        cj.push_back( make_pair(age[i],name[i]) );
    }

    for(int i = c; i < n; ++i)
    {
        cout << cj[i].second << endl;
    }

    for(int i = 0; i < c; ++i)
    {
        cout << cj[i].second << endl;
    }

    

}