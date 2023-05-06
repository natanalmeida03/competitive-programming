#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int A, B, C;
    double res[2], aux;

    cin >> A >> B >> C;

    if (A == 0 && B == 0) {
        if (C == 0) {
            cout << -1 << endl;
        } else {
            cout << 0 << endl;
        }
    } else if (A == 0 && (B!= 0 || C!= 0)) {
        cout << 1 << endl;
        cout << fixed << setprecision(5) << (-1.0)*C / B << endl;
    } else {
        double delta = (B * B) - (4.0 * A * C);

        if (delta < 0) {
            cout << 0 << endl;
        } else if (delta == 0) {
            cout << 1 << endl;
            cout << fixed << setprecision(5) << ((-1.0)*B) / (2 * A) << endl;
        } else {
            cout << 2 << endl;

            res[0] = ((((-1.0)*(B))+(sqrt(delta)))/(2*A));
            res[1] = ((((-1.0)*(B))-(sqrt(delta)))/(2*A));

            if(res[0] > res[1])
            {
                aux = res[0];
                res[0] = res[1];
                res[1] = aux;
            }
            cout << fixed << setprecision(5) << res[0] << endl;
            cout << fixed << setprecision(5) << res[1] << endl;
        }
    }
    return 0;
}