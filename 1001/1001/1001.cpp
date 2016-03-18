#include <iostream>

using namespace std;

int main()
{
	int n, cnt = 0;

	cin >> n;

	while (1 != n)
	{
		if (n % 2)
			n = (3 * n + 1) / 2;
		else
			n = n / 2;
		cnt++;
	}

	cout << cnt << endl;

	return 0;
}