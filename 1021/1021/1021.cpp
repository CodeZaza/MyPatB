#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n;
	cin >> n;

	int num[10] = {};
	for (int i = 0; i < n.length(); i++)
	{
		num[n[i] - '0']++;

	}
	for (int i = 0; i < 10; i++)
	{
		if (num[i] != 0)
			cout << i << ":" << num[i] << endl;
	}
	return 0;
}