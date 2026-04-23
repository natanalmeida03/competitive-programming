#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string a, b;
        cin >> a >> b;

        vector<int> dp(n+1, 1e9);
        dp[0] = 0;

        for(int i = 1; i <= n; i++){
            dp[i] = dp[i-1] + (a[i-1] != b[i-1]);
            if(i >= 2){
                int aux = (a[i-2] != a[i-1]) + (b[i-2] != b[i-1]);
                dp[i] = min(dp[i], dp[i-2] + aux);
            }
        }

        cout << dp[n] << endl;
    }
}