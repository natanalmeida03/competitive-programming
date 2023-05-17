#include <bits/stdc++.h>

using namespace std;

int main() {
    long long A, B, C, res[2], aux;

    cout << fixed << setprecision(5);

    cin >> A >> B >> C;

    if (A == 0 && B == 0) {
        if (C == 0) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if (A == 0 and (B or C)) {
        cout << 1 << endl;
        cout << (-1.0)*C / B << endl;
    } else {
        double delta = (B * B) - (4.0 * A * C);

        if (delta < 0.0) {
            cout << 0 << endl;
        } else if (delta == 0.0) {
            cout << 1 << endl;
            cout <<((-1.0)*B) / (2.0 * A) << endl;
        } else {
            cout << 2 << endl;

            res[0] = ((((-1.0)*((double) B))+(sqrt(delta)))/(2.*A));
            res[1] = ((((-1.0)*(B))-(sqrt(delta)))/(2.*A));

            if(res[0] > res[1])
                swap(res[0], res[1]);
            cout << res[0] << endl;
            cout << res[1] << endl;
        }
    }
    return 0;
}