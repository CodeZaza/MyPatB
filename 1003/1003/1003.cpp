//错误的，没有考虑数学关系，复杂且易出错

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int n; 
//	cin >> n;
//	size_t p, t;
//	string a, b, c;
//
//	for (int i = 0; i < n; i++)
//	{
//		//cout << i << endl;
//		string test;
//		cin >> test;
//
//		int flag = 1;
//		for (int j = 0; j < test.length(); j++)
//		{
//			if (test[j] == 'P' || test[j] == 'A' || test[j] == 'T')
//				continue;
//			flag = 0;
//		}
//		
//
//		if (flag)
//		{
//			p = test.find('P');
//			t = test.find('T');
//
//			if (p == string::npos || t == string::npos)
//			{
//				flag = 0; continue;
//			}
//
//			a.assign(test, 0, p);
//			b.assign(test, p + 1, t - p - 1);
//			c.assign(test, t + 1, test.length() - t - 1);
//
//			while (t - p > 2)// && p != 0 && t != test.length())
//			{
//				//cout << "l=" << test.length() << endl;
//				//cout << "p=" << p << ' ' << a << endl;
//				//cout << b << endl;
//				//cout << "t=" << t << ' ' << c << endl;
//
//				b.assign(b, 0, b.length() - 1);
//				if (p != 0 && t != test.length())
//					c.assign(c, 0, c.length() - a.length());
//				test = a + "P" + b + "T" + c;
//
//				//cout << "new test=" << test << endl;
//
//				p = test.find('P');
//				t = test.find('T');
//
//				a.assign(test, 0, p);
//				b.assign(test, p + 1, t - p - 1);
//				c.assign(test, t + 1, test.length() - t - 1);
//			}
//
//		}
//
//		if (flag && 2 == t - p && a == c)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//
//		//cout << i << "end" << endl;
//		//cout << endl;
//	}
//	return 0;
//}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		size_t p = s.find_first_not_of('A', 0);
		size_t t = s.find_first_not_of('A', p + 1);
		//a,b,c字符串长度关系：c-(b-1)*a=a——→a*b=c
		if (s[p] == 'P'&&s[t] == 'T' && 1 < t - p&&p*(t - p - 1) == s.length() - t - 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
	return 0;
}