#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b, d;
	cin >> a >> b >> d;

	vector<int> conv;
	int sum;

	sum = a + b;
	if (sum != 0)
	{
		while (sum != 0)
		{
			conv.push_back(sum%d);
			sum /= d;
		}

		vector<int>::iterator it;
		for (it = conv.end() - 1; it > conv.begin(); it--)
			cout << *it;
		cout << *it << endl;
	}
	else
		cout << 0 << endl;

	return 0;
}