/*大侦探福尔摩斯接到一张奇怪的字条：“我们约会吧！ 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm”。
大侦探很快就明白了，字条上奇怪的乱码实际上就是约会的时间“星期四 14:04”，
因为前面两字符串中第1对相同的大写英文字母（大小写有区分）是第4个字母'D'，代表星期四；
第2对相同的字符是'E'，那是第5个英文字母，代表一天里的第14个钟头（于是一天的0点到23点由数字0到9、以及大写字母A到N表示）；
后面两字符串第1对相同的英文字母's'出现在第4个位置（从0开始计数）上，代表第4分钟。现给定两对字符串，请帮助福尔摩斯解码得到约会的时间。

输入格式：

输入在4行中分别给出4个非空、不包含空格、且长度不超过60的字符串。

输出格式：

在一行中输出约会的时间，格式为“DAY HH : MM”，其中“DAY”是某星期的3字符缩写，
即MON表示星期一，TUE表示星期二，WED表示星期三，THU表示星期四，FRI表示星期五，
SAT表示星期六，SUN表示星期日。题目输入保证每个测试存在唯一解。

输入样例：
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
输出样例：
THU 14:04*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string day[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
	string a1, a2, b1, b2;
	cin >> a1 >> a2 >> b1 >> b2;

	int d = 1;
	for (int i = 0; i < a1.length() || i < a2.length(); i++)
	{
		if (isupper(a1[i]) && a1[i] == a2[i] && d)
		{
			if (a1[i]>'G') continue;
			d = 0;
			cout << day[a1[i] - 'A'] << ' ';
			continue;
		}
		if (!d && a1[i] == a2[i] && (isdigit(a1[i]) || ('A' <= a1[i] && a1[i] <= 'N')) )
		{
			//cout << "a1i=" << a1[i] << endl;
			if (isdigit(a1[i]))
				cout << '0' << a1[i];
			else if (a1[i] <= 'N')
				cout << a1[i] - 'A' + 10;
			break;
		}

	}

	for (int i = 0; i < b1.length() || i < b2.length(); i++)
	{
		if (isalpha(b1[i]) && b1[i] == b2[i])
		{
			cout << ":" << i / 10 << i % 10 << endl;

			break;
		}
			
		

	}
	

	return 0;
}