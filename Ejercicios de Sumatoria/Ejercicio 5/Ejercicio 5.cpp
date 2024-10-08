#include <iostream>
using namespace std; 
#include <cmath>

int main() {
    int n, it = 0, sum = 2, num = 2;
    cin >> n;
    for (int i = 1; i <= n - 1; i++)
    {
        it += 2;
        num = num * (it + 1) * (it + 2);
        sum = sum + num;
    }
    cout << sum;
    return 0;
}