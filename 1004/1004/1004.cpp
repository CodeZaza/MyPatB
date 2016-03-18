#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
	string name;
	string id;
	int score;
};

int main()
{
	int n;
	cin >> n;

	Student a, stu_h,stu_l;
	cin >> a.name >> a.id >> a.score;
	stu_h = stu_l = a;

	for (int i = 1; i < n; i++)
	{
		cin >> a.name >> a.id >> a.score;
		if (a.score>stu_h.score)
			stu_h = a;
		if (a.score<stu_l.score)
			stu_l = a;
	}

	cout << stu_h.name << ' ' << stu_h.id << endl;
	cout << stu_l.name << ' ' << stu_l.id << endl;


	return 0;
}