#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string s; cin >> s;
        int l = -1, r = -1;
        int aux = 0;
        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[i-1] and l == -1) l = i;
            if(s[i] == s[i-1]) {
                r = i;
                aux++;
            }
        }

        if(aux > 2) cout << "NO\n";
        else cout << "YES\n";

    }
}