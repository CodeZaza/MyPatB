#include <iostream>
#include <math.h>

using namespace std;

bool isPrimer(int x)
{
	bool flag = true;

	if (x % 2 == 0 && x != 2)
		flag = false;
	else
	for (int i = 3; i <= sqrt(x); i += 2)
	{
		if (x%i == 0) flag = false;
	}

	return flag;
}

int main()
{
	int m, n;
	cin >> m >> n;
	
	int i = 2;
	int cnt = 0;
	while (cnt < n)
	{
		if (isPrimer(i))
		{
			cnt++;
			if (cnt == n)
				cout << i << endl;
			else if (cnt >= m)
			{
				if ((cnt - m + 1) % 10 == 0)
					cout << i << endl;
				else
					cout << i << ' ';
			}
				
		}
		i++;
	}

				
//	getchar();
		
	return 0;
}