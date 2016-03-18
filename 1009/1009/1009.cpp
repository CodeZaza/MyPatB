#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	string s, buf;
	getline(cin, s);
	stringstream ss(s);
	vector<string> tokens;

	while (ss >> buf)
	{
		//cout << buf << endl;
		tokens.push_back(buf);
	}
		

	for (int i = tokens.size() - 1; i > 0; i--)
	{
		cout << tokens[i] << ' ';
	}
	cout << tokens[0] << endl;

	//getchar();

	return 0;
}