#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <algorithm>

using namespace std;

class mooncake
{
public:
	double stock;//不一定是整数
	double price;
	double unitPrice;
};

bool Comp(mooncake a, mooncake b)
{
	return a.unitPrice > b.unitPrice;
}

int main()
{
	int n, d;
	scanf("%d %d", &n, &d);

	mooncake *mc = new mooncake[n];

	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &(mc[i].stock));//读入浮点数用lf
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &(mc[i].price));
		mc[i].unitPrice = mc[i].price / mc[i].stock;
	}

	sort(mc, mc + n, Comp);

	double sum(0);

	for (int i = 0; i < n; i++)
	{
		if (mc[i].stock >= d)
		{
			sum += d*mc[i].unitPrice;
			d = 0; break;
		}
		else
		{
			d -= mc[i].stock;
			sum += mc[i].price;
		}
	}

	printf("%0.2f", sum);

	return 0;
}