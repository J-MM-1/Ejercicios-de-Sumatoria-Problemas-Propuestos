#include <iostream>
using namespace std; 

int main() {
	int n, x, n1, n2, d1 = 1, d2 = 6;
	cin >> n;
	cin >> x;
	n1 = x;
	n2 = (x * x);
	int it = 3;

	for (int i = 0; i < n - 1; i++)
	{
		n1 = (n1 * d2) + (d1 * n2);
		d1 = d1 * d2;
		n2 = n2 * x;
		d2 = d2 * (it + 1) * (it + 2);
		it += 2;
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