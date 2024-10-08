#include <iostream>
using namespace std;

int main() {
	int n, n1 = 2, n2 = 4, d1 = (3 * 3 * 3), d2 = (5 * 5 * 5), it = 7;
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
		n2 += 2;
		d2 = (it * it * it);
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