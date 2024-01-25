#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, n; cin >> s >> n;
    vector<pair<int, int>> d;
    
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        d.emplace_back(make_pair(x, y));
    }

    sort(d.begin(), d.end());

    for (int i = 0; i < n; i++)
    {
        //cout << s << " - " << d[i].first << "\n";
        if(s <= d[i].first)
        {
            cout << "NO\n";
            return 0;
        }
        else    
        {
            s += d[i].second;
        }
    }
    
    cout << "YES\n";
    return 0;
}