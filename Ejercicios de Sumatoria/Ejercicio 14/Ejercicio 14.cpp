#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}