#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<time.h>
#include<vector>
using namespace std;

void RAND(int max, int min, int n)
{
	srand(time(NULL));
	vector<int> v;
	for (int i = 0; i < n; i++)
	{
		int u = rand() % max;
		if (u == 0)
		{
			i--;
			continue;
		}
		int flag = 0;
		for (int j = 0; j < v.size(); j++)
		{
			if (v[j] == u)
			{
				i--;
				flag = 1;
				break;
			}
				
		}
		if (flag == 0)
			v.push_back(u);
	}
	cout << " ѡ���ĺ��룺";
	for (auto e : v)
	{
		cout << e << " ";
	}
	cout << endl;
}

int main()
{
	while (1)
	{
		cout << "-------------1   ��ʼѡ��-------------" << endl;
		cout << "-------------2   �����˳�-------------" << endl;
		cout << " ѡ�";
		int num;
		cin >> num;
		if (num == 1)
		{
			RAND(36, 1, 7);
			cout << endl;
		}
			
		else if (num == 2)
			break;
		else
			cout << " ����������������룺";
	}

	system("pause");
	return 0;
}