#include <iostream>
using namespace std;

int main() {
	int n, x, n1, n2 = 4, d1 = 1, d2 = 2, it = 3, it2 = 1;
	cin >> n;
	cin >> x;
	n1 = x;
	n2 = x * x;

	for (int i = 0; i < n - 1; i++)
	{
		if (i % 2 == 0)
		{
			n1 = (n1 * d2) - (d1 * n2);
		}
		else
		{
			n1 = (n1 * d2) + (d1 * n2);
			it2++;
		}
		d1 = d1 * d2;
		n2 = it2 * (n2 * x);
		d2 = it * it2;
		it++;
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