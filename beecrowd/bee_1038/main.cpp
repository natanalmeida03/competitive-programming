#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int qtd, cd;
    float preco[6] = {4, 4.5, 5, 2, 1.5};

    cin >> cd >> qtd;

    cout << "Total: R$ " << fixed << setprecision(2) << preco[cd-1]*qtd << endl;
}