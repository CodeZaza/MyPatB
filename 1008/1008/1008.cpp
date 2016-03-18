#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int num[105];
	for (int i = 0; i < n; i++)
	{
		cin >> num[(i + m) % n];
	}

	cout << num[0];
	for (int i = 1; i < n; i++)
		cout << ' ' << num[i];
	cout << endl;

	return 0;
}