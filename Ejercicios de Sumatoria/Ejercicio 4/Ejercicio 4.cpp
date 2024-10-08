#include <iostream>
using namespace std; 
#include <cmath>

int main() {
    int n, nm, mayor = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "Digite " << i << ": ";
        cin >> nm;
        if (nm > mayor)
        {
            mayor = nm;
        }
    }
    cout << "el mayor es: " << mayor << endl;
    return 0;
}