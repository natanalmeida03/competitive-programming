#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    char s1, s2, s3; cin >> s1 >> s2 >> s3;

    char ans = 'B';
    if((s1 == '>' and s2 == '<' and s3 == '<') or (s1 == '<' and s2 == '>' and s3 == '>')) ans = 'A';
    else if((s1 == '<' and s3 == '<' and s2 == '<') or (s1 == '>' and s3 == '>' and s2 == '>')) ans = 'B';
    else ans = 'C';

    cout << ans << endl;
    return 0;
}