/*�δ�ʷѧ��˾����ڡ�����ͨ��������һ�������ġ��²��ۡ���
���ǹʲŵ�ȫ��ν֮ʥ�ˣ��ŵ¼���ν֮���ˣ���ʤ��ν֮���ӣ���ʤ��ν֮С�ˡ�
��ȡ��֮����������ʥ�ˣ����Ӷ���֮�������С�ˣ����������ˡ���

�ָ���һ�������ĵ²ŷ����������˾�������۸���¼ȡ������

�����ʽ��

�����1�и���3�����������ֱ�Ϊ��N�� <= 105����������������
low�� >= 60����Ϊ¼ȡ��ͷ����ߣ����·ֺͲŷ־�������low�Ŀ��������ʸ񱻿���¼ȡ��
H��<100����Ϊ����¼ȡ�ߡ����·ֺͲŷ־������ڴ��ߵı�����Ϊ���ŵ�ȫ���������࿼�����²��ִܷӸߵ�������
�ŷֲ������·ֵ��ߵ�һ�࿼�����ڡ���ʤ�š���Ҳ���ܷ����򣬵����ڵ�һ�࿼��֮��
�²ŷ־�����H�����ǵ·ֲ����ڲŷֵĿ������ڡ��ŵ¼����������С���ʤ�š��ߣ����ܷ����򣬵����ڵڶ��࿼��֮��
�����ﵽ�����low�Ŀ���Ҳ���ܷ����򣬵����ڵ����࿼��֮��

���N�У�ÿ�и���һλ��������Ϣ��������׼��֤�š��·֡��ŷ֣�����׼��֤��Ϊ8λ������
�²ŷ�Ϊ����[0, 100]�ڵ����������ּ��Կո�ָ���

�����ʽ��

�����1�����ȸ����ﵽ��ͷ����ߵĿ�������M�����M�У�ÿ�а��������ʽ���һλ��������Ϣ��
������������˵���Ĺ���Ӹߵ������򡣵�ĳ�࿼�����ж����ܷ���ͬʱ��
����·ֽ������У����·�Ҳ���У���׼��֤�ŵ����������

����������
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
���������
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

#include <cstdio>//��iostream�ĳ�cstdio���������г�ʱ
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

struct Student
{
	//public:
	int id;
	int mor;//��
	int qua;//��
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