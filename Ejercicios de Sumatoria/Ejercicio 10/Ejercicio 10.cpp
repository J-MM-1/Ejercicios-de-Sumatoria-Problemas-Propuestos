#include <iostream>
using namespace std;
#include <cmath>

int main() {
	int n, n1 = 1, n2 = pow(3, 4), d1 = 1 * 2, d2 = 3 * 4, it1 = 5;
	cin >> n;

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
		n2 = pow(it1, (it1 + 1));
		d2 = it1 * (it1 + 1);
		it1 += 2;
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