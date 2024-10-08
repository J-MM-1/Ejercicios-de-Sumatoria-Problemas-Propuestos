#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int n, k = 0, it = 0;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (it == 0)
        {
            k++;
            if (k == n)
            {
                it = 1;
            }
        }
        else k--;

        for (int j = 1; j <= k; j++)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}