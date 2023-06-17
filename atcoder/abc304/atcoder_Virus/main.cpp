#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, d, dist;
    vector<pair<int,int>> c;

    cin >> n >> d;

    int yn[n];

    for(int i = 0; i < n; ++i)
    {
        cin >> c[i].first;
        cin >> c[i].second;
    }

    cout << "Yes" << endl;
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 1; j < n; ++j)
        {
            dist = sqrt((abs(c[i].first - c[j].first)) + abs(c[i].second - c[j].second));
            if(dist <= d) yn[j] = 1;
        }
    }

    for(int i = 1; i < n; ++i)
    {
        yn[i] == 1?cout << "Yes" << endl:cout<<"No"<<endl;
    }

}