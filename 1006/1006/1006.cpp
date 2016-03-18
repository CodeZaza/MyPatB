#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int baiwei = n / 100;
	int shiwei = n / 10 % 10;
	int gewei = n % 10;

	for (int i = 0; i < baiwei; i++)
	{
		cout << 'B';
	}
	for (int i = 0; i < shiwei; i++)
	{
		cout << 'S';
	}
	for (int i = 0; i < gewei; i++)
	{
		cout << i+1;
	}
	cout << endl;

	return 0;
}