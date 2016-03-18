#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;

	//cout << -5 % 5 << ' ' << -4 % 5 << ' ' << -3 % 5 << endl;

	cin >> n;

	int a1 = 0, a2 = 0, a3 = 0, a5 = 0;
	double a4 = 0;
	int flag = 1,a2cnt = 0, a4cnt = 0, a5cnt = 0;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		switch(k % 5)
		{
		case 0:
			if (k % 2 == 0)
				a1 += k;
			break;
		case 1:
			a2cnt++;
			a2 = a2 + flag*k;
			flag = -flag;
			break;
		case 2:
			a3++;
			break;
		case 3:
			a4cnt++;
			a4 += k;
			break;
		case 4:
			a5cnt++;
			if (k > a5)
				a5 = k;
			break;
		}
	}
	


	if (a1 == 0)
		cout << "N" << ' ';
	else
		cout << a1 << ' ';
	if (a2cnt == 0)
		cout << "N" << ' ';
	else
		cout << a2 << ' ';
	if (a3 == 0)
		cout << "N" << ' ';
	else
		cout << a3 << ' ';
	if (a4cnt == 0)
		cout << "N" << ' ';
	else
		cout << setprecision(1) << fixed << a4/a4cnt << ' ';
	if (a5cnt == 0)
		cout << "N" << endl;
	else
		cout << a5 << endl;
	return 0;
}