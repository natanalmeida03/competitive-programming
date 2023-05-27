#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int>> pos;
string word{"snuke"};

using ii = pair<int, int>;

const vector <ii> directions = {
    {0, 1}, {0, -1}, {1, 0}, {-1, 0},
    {1, 1}, {-1, -1}, {1, -1}, {-1, 1},
};

auto find_directions (const vector<string> &grid)
{
    vector<ii> positions;
    for (int i = 0; i < 5; ++i)
    {
        if (0 <= u and u < h and 0 <= v and v < w)
            positions.emplace_back(u, v);
        else
            break;
        u += dx;
        v += dy;
    }
    if (positions.size() < 5)
        break;
    const string s{"snuke"};
    bool ok = true;
    for (int i = 0; i < 5; ++i)
    {
        auto [r, s] = positions[i];
        if (s[i] not_eq grid[r][s])
        {
            ok = false;
            break;
        }
    }
    if (ok)
        return positions;
}

int main()
{
    int h, w; // unsigned long
    cin >> h >> w;
    vector<string> grid(h);
    for (auto &row : grid)
        cin >> row;
    for (auto [dx, dy] : directions)
    {
        for (int x = 0; x < h; ++x)
        {
            for (int y = 0; y < w; ++y)
            {
                auto u = x, v = y;
                
            }
        }
    }
    for (const auto p : pos)
        cout << p.first << ' ' << p.second << '\n'; 
}