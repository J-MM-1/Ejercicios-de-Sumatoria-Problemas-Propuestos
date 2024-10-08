#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n, sum, e;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Ingrese la " << i << "* nota: ";
        cin >> e;
        sum += e;
    }
    sum /= n;
    cout << sum << endl;
    return 0;
}