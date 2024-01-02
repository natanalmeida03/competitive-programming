#include <bits/stdc++.h>

using namespace std;

int main ()
{
    string s;
    vector<string> weather = {"Sunny", "Cloudy", "Rainy"};

    cin >> s;

    if(s == "Sunny")
        cout << weather[1] << "\n";
    if(s == "Cloudy")
        cout << weather[2] << "\n";
    if(s == "Rainy")
        cout << weather[0] << "\n";
}