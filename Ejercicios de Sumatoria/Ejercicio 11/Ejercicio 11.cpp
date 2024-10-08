#include <iostream>
using namespace std;
#include <cmath>

int main() {
    int a = 14, b = 1, n, s = 0;
    cin >> n;

    for (int i = 1; i <= n - 1; i++)
    {
        if (i % 3 == 0)
        {
            s = s + a;
            a += 7;
        }
        else
        {
            s = s - b;
            b++;
        }
    }
    s += 7;
    cout << s << endl;
    return 0;
}