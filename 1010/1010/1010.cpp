#include <iostream>

using namespace std;

int main()
{
	int exp, coef;
	int flag = 1;
	while (cin >> coef >> exp)
	{
		if (exp == 0)
		if (flag)
		{
			cout << "0 0" << endl;
			break;
		}
		else
			break;
			
		else
		if (flag)
		{
			flag = 0;
			cout << coef * exp << ' ' << exp - 1;
		}
		else
			cout << ' ' << coef * exp << ' ' << exp - 1;
	}

	//getchar();

	return 0;
}