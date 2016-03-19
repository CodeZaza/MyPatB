#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>
#include <string.h>
#include <stdlib.h>

using namespace std;

bool CompMax(char a, char b)
{
	return a > b;
}

bool CompMin(char a, char b)
{
	return a < b;
}

int main()
{
	char n[5];
	int a, b;
	int res(0), nn;
	//cin >> n;
	scanf("%d", &nn);

	n[0] = nn / 1000 + '0'; n[1] = nn / 100 % 10 + '0';
	n[2] = nn / 10 % 10 + '0'; n[3] = nn % 10 + '0';

	while (res != 6174)
	{
		if (n[0] == n[1] && n[1] == n[2] && n[2] == n[3])
		{  
			printf("%s - %s = 0000\n", n, n);
			break;
		}

		sort(n, n + 4, CompMax); a = atoi(n);
		sort(n, n + 4, CompMin); b = atoi(n);
	
		res = a - b;
		if (res < 1000)
		{
			n[0] = '0';
			sprintf(n + 1, "%d", res);
		}
		else
			sprintf(n, "%d", res);
			
		printf("%04d - %04d = %04d\n", a, b, res);
	}

	return 0;
}