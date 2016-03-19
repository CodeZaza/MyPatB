#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char a[1000], q[1000];
	int b, r;

	cin >> a >> b;

	int len = strlen(a), i(0), j(0), aa(0), flag(0);

	while (i < len)
	{
		aa = aa * 10 + a[i] - '0';
		
		if (aa >= b)
			flag = 1;
		if (flag)
		{
			q[j++] = aa / b + '0';
			aa = aa%b;
		}
		i++;
	}

	if (j == 0)
		q[j++] = '0';
	q[j] = '\0';
	r = aa;

	cout << q << ' ' << r << endl;
	return 0;
}