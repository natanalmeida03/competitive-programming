#include <bits/stdc++.h>

using namespace std;
using pii = pair<int, int>;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n, a;

    cin >> n;

    vector <pii> num;
    vector <pii> numnec;

    for(int i = 0; i < 3*n; ++i)
    {
        cin >> a;
        num.push_back(make_pair(a, i));
    }

    sort(num.begin(), num.end());

    for(int i = 1; i <= 3 * n; i += 3)
    {
        numnec.push_back(make_pair(num[i].first, num[i].second));
    }

    sort(numnec.begin(), numnec.end(), sortbysec);

    for(int i = 0; i < n; ++i)
    {
        cout << numnec[i].first << " ";
    }

}