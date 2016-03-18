#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long int a, b, c;
		cin >> a >> b >> c;
		cout << "Case #" << i + 1 << ": ";
		if (a + b > c)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}

	return 0;
}