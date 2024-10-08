#include <iostream>
using namespace std; 
#include <cmath>

int main() {
    int n, sum, e;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << "*" << i << "=" << (j * i) << "\t";
        }
        cout << endl;
    }
    return 0;
}