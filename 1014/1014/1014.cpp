/*����̽����Ħ˹�ӵ�һ����ֵ�������������Լ��ɣ� 3485djDkxh4hhGE 2984akDfkkkkggEdsb s&hgsfdk d&Hyscvnm����
����̽�ܿ�������ˣ���������ֵ�����ʵ���Ͼ���Լ���ʱ�䡰������ 14:04����
��Ϊǰ�����ַ����е�1����ͬ�Ĵ�дӢ����ĸ����Сд�����֣��ǵ�4����ĸ'D'�����������ģ�
��2����ͬ���ַ���'E'�����ǵ�5��Ӣ����ĸ������һ����ĵ�14����ͷ������һ���0�㵽23��������0��9���Լ���д��ĸA��N��ʾ����
�������ַ�����1����ͬ��Ӣ����ĸ's'�����ڵ�4��λ�ã���0��ʼ�������ϣ������4���ӡ��ָ��������ַ��������������Ħ˹����õ�Լ���ʱ�䡣

�����ʽ��

������4���зֱ����4���ǿա��������ո��ҳ��Ȳ�����60���ַ�����

�����ʽ��

��һ�������Լ���ʱ�䣬��ʽΪ��DAY HH : MM�������С�DAY����ĳ���ڵ�3�ַ���д��
��MON��ʾ����һ��TUE��ʾ���ڶ���WED��ʾ��������THU��ʾ�����ģ�FRI��ʾ�����壬
SAT��ʾ��������SUN��ʾ�����ա���Ŀ���뱣֤ÿ�����Դ���Ψһ�⡣

����������
3485djDkxh4hhGE
2984akDfkkkkggEdsb
s&hgsfdk
d&Hyscvnm
���������
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