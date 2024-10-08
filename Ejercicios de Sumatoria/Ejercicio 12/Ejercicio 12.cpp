#include <iostream>
using namespace std; 
#include <cmath>

int main() {
	int n, x, y, n1, n2, d1, d2, fact, cambio, it;
	cin >> n;
	cin >> x;
	cin >> y;
	n1 = 2 * y;
	d1 = pow(x, (1 * 2 * 3));
	n2 = pow(x, (1 * 2 * 3 * 4 * 5 * 6));
	d2 = 5 * y;
	fact = (1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9);
	it = 8;

	for (int i = 0; i < n - 1; i++)
	{
		if (i % 2 == 0)
		{
			n1 = (n1 * d2) - (d1 * n2);
		}
		else
		{
			n1 = (n1 * d2) + (d1 * n2);
		}
		d1 = d1 * d2;
		n2 = it * y;
		d2 = pow(x, fact);
		fact = fact * (it + 2) * (it + 3) * (it + 4);
		it += 3;
		if (i % 2 != 0)
		{
			cambio = n2;
			n2 = d2;
			d2 = cambio;
		}
	}

	int i = 2;
	while (i < n1 || i < d1)
	{
		if (n1 % i == 0 && d1 % i == 0)
		{
			n1 /= i;
			d1 /= i;
		}
		else
		{
			i++;
		}
	}
	cout << n1 << "/" << d1 << endl;

	return 0;
}