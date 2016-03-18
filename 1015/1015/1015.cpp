/*宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：
“是故才德全尽谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。
凡取人之术，苟不得圣人，君子而与之，与其得小人，不若得愚人。”

现给出一批考生的德才分数，请根据司马光的理论给出录取排名。

输入格式：

输入第1行给出3个正整数，分别为：N（ <= 105），即考生总数；
low（ >= 60），为录取最低分数线，即德分和才分均不低于low的考生才有资格被考虑录取；
H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；
才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；
德才分均低于H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；
其他达到最低线low的考生也按总分排序，但排在第三类考生之后。

随后N行，每行给出一位考生的信息，包括：准考证号、德分、才分，其中准考证号为8位整数，
德才分为区间[0, 100]内的整数。数字间以空格分隔。

输出格式：

输出第1行首先给出达到最低分数线的考生人数M，随后M行，每行按照输入格式输出一位考生的信息，
考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，
按其德分降序排列；若德分也并列，则按准考证号的升序输出。

输入样例：
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
输出样例：
12
10000013 90 99
10000012 80 100
10000003 85 80
10000011 85 80
10000004 80 85
10000007 90 78
10000006 83 76
10000005 82 77
10000002 90 60
10000014 66 60
10000008 75 79
10000001 64 90*/

#include <cstdio>//从iostream改成cstdio，否则运行超时
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Student
{
	//public:
	int id;
	int mor;//德
	int qua;//才
	int sum;
};

bool compare(Student a, Student b)
{
	if (a.sum != b.sum)
		return a.sum > b.sum;

	if (a.mor != b.mor)
		return a.mor > b.mor;

	return a.id < b.id;
}


int main()
{
	vector<Student> v1, v2, v3, v4;

	int n, low, high;
	//cin >> n >> low >> high;
	scanf("%d %d %d", &n, &low, &high);

	int cnt(0);
	Student temp;
	for (int i = 0; i < n; i++)
	{
		//cin >> temp.id >> temp.mor >> temp.qua;
		scanf("%d %d %d", &temp.id, &temp.mor, &temp.qua);
		temp.sum = temp.mor + temp.qua;
		//if (temp.mor >= low && temp.qua >= low)
		//  cnt++;
		if (temp.mor >= high && temp.qua >= high)
			v1.push_back(temp); //c1[c1cnt++] = temp;
		else if (temp.mor >= high && temp.qua >= low)
			v2.push_back(temp); //c2[c2cnt++] = temp;
		else if (temp.mor >= low && temp.qua >= low && temp.mor >= temp.qua)
			v3.push_back(temp); //c3[c3cnt++] = temp;
		else if (temp.mor >= low && temp.qua >= low)
			v4.push_back(temp); //c4[c4cnt++] = temp;
	}

	sort(v1.begin(), v1.end(), compare);
	sort(v2.begin(), v2.end(), compare);
	sort(v3.begin(), v3.end(), compare);
	sort(v4.begin(), v4.end(), compare);

	//cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
	printf("%d\n", v1.size() + v2.size() + v3.size() + v4.size());
	//cout << cnt << endl;
	vector<Student>::iterator i;
	for (i = v1.begin(); i < v1.end(); i++)
	{
		//cout << i->id << ' ' << i->mor << ' ' << i->qua << endl;
		printf("%d %d %d\n", i->id, i->mor, i->qua);
	}
	for (i = v2.begin(); i < v2.end(); i++)
	{
		//cout << i->id << ' ' << i->mor << ' ' << i->qua << endl;
		printf("%d %d %d\n", i->id, i->mor, i->qua);
	}
	for (i = v3.begin(); i < v3.end(); i++)
	{
		//cout << i->id << ' ' << i->mor << ' ' << i->qua << endl;
		printf("%d %d %d\n", i->id, i->mor, i->qua);
	}
	for (i = v4.begin(); i < v4.end(); i++)
	{
		//cout << i->id << ' ' << i->mor << ' ' << i->qua << endl;
		printf("%d %d %d\n", i->id, i->mor, i->qua);
	}

	return 0;
}