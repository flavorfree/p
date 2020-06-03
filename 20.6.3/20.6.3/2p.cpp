#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<vector>
using namespace std;

//划分数组，分为n段，每段都是递增或递减

int main()
{
	int n, num;
	cin >> n;
	vector<int> v;
	v.resize(n);
	int i = 0;
	int sz = n;
	while (n)
	{
		cin >> num;
		v[i++] = num;
		n--;
	}
	int flag = 0;
	int key = 0;
	for (i = 0; i < sz - 1; i++)
	{
		flag++;
		while (i < sz - 1 && v[i] >= v[i + 1])
		{
			i++;
			if (key == 0)
				key = 1;
			else
				key = 2;
		}


		while (i < sz - 1 && v[i] <= v[i + 1])
		{
			i++;
			if (key == 0)
				key = 1;
			else
				key = 2;
		}
	}
	if (key == 1)
		flag--;
	cout << flag << endl;

	system("pause");
	return 0;
}