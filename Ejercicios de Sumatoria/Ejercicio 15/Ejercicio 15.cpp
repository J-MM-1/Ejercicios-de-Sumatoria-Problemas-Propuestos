#include <iostream>
using namespace std; 
#include <cmath>

int main() {
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "**";
        }
        cout << endl;
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 4; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}