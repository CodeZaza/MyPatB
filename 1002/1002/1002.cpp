#include <iostream>
#include <string>

using namespace std;

string shuzi[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "shi" };

int main()
{
	//char num[105];
	string num;
	cin >> num;

	int sum = 0;
	for (int i = 0; i < num.length(); i++)
		sum += num[i] - '0';
	
	string outsum;
	outsum = to_string(sum);

	cout << shuzi[outsum[0] - '0'];
	for (int i = 1; i < outsum.length(); i++)
		cout << ' ' << shuzi[outsum[i] - '0'];
	cout << endl;
	
	return 0;
}