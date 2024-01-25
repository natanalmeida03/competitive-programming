#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> v(n);
    vector<int> p, o;

    for(int i = 0; i < n; i++)
    {
        int a; 
        cin >> a;
        v[i] = a;
    }

    for(auto i : v)
    {
        if(i % 2 == 0)
            p.emplace_back(i);
        else
            o.emplace_back(i);
    }

    int aux;
    if(p.size() == 1)
    {
        aux = p[0];
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == aux)
            {
                cout << i+1 << "\n";
                return 0; 
            }
        }
    }
    else{
        aux = o[0];
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i] == aux)
            {
                cout << i+1 << "\n";
                return 0; 
            }
        }
    }
    return 0;
}