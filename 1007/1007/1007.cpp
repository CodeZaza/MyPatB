#include <iostream>
#include <math.h>

using namespace std;

bool isPrimer(int x)
{
	bool flag = true;

	for (int i = 2; i <= sqrt(x); i++)
	{
		if (0 == x%i)
		{
			flag = false;
			break;
		}
			
	}

	return flag;
}

int main()
{
	int N;
	cin >> N;

	int pn = 3, pn1 = 3, cnt = 0;
	for (int i = 3; i <= N; i = i + 2)
	{
		if (isPrimer(i))
		{
			pn = pn1;
			pn1 = i;
			if (pn1 - pn == 2) cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}