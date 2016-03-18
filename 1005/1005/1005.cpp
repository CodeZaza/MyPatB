#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int K;
	cin >> K;

	int n, num[105];

	for (int i = 0; i < K; i++)
		cin >> num[i];

	for (int i = 0; i < K; i++)
	{
		n = num[i];

		while (n != 1)
		{
			if (n % 2)
				n = (3 * n + 1) / 2;
			else
				n = n / 2;

			for (int j = 0; j < K;j++)
				if (num[j] == n) num[j] = 1;

		}
	}

	sort(num, num + K);

	cout << num[K - 1];
	for (int i = K-2; i >= 0; i--)
	{
		if (num[i] != 1)
			cout << ' ' << num[i];
	}
	return 0;
}