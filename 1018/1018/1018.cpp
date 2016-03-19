#include <iostream>

using namespace std;

int Result(char a, char b)
{
	if (a == b)
		return 0;
	else if ((a == 'J'&&b == 'B') || (a == 'B'&&b == 'C') || (a == 'C'&&b == 'J'))
		return 1;
	else
		return -1;
}

int main()
{
	int n;
	cin >> n;

	int win(0), lose(0), tie(0);
	int chui_a(0), jian_a(0), bu_a(0);
	int chui_b(0), jian_b(0), bu_b(0);
	char a, b;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		int res = Result(a, b);
		if (res == 0) //-1,0,1=lose,tie,win
		{
			tie++;
		}
		else if (res == 1)
		{
			win++;
			if (a == 'B')
				bu_a++;
			else if (a == 'J')
				jian_a++;
			else
				chui_a++;
		}
		else
		{
			lose++;
			if (b == 'B')
				bu_b++;
			else if (b == 'J')
				jian_b++;
			else
				chui_b++;
		}
	}

	cout << win << ' ' << tie << ' ' << lose << endl;
	cout << lose << ' ' << tie << ' ' << win << endl;
	if (bu_a >= chui_a&&bu_a >= jian_a)
		cout << "B ";
	else if (chui_a>bu_a&&chui_a>=jian_a)
		cout << "C ";
	else if (jian_a>bu_a&&jian_a > chui_a)
		cout << "J ";
	if (bu_b >= chui_b&&bu_b >= jian_b)
		cout << "B" << endl;
	else if (chui_b>bu_b&&chui_b >= jian_b)
		cout << "C" << endl;
	else if (jian_b>bu_b&&jian_b > chui_b)
		cout << "J" << endl;

	return 0;
}