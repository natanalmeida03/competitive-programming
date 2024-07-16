#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    string s;
    getline(cin, s);

    cout << " " << string(s.length()+2, '_') << endl;
    cout << "< " << s << " >\n";
    cout << " " << string(s.length()+2, '=') << endl;
    cout << "        \\   ^..^      /\n";
    cout << "         \\  /_/\\_____/\n";
    cout << "               /\\   /\\ \n";
    cout << "              /  \\ /  \\ \n";

    return 0;
}