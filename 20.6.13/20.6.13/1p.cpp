#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include<algorithm>
using namespace std;

//��һ�������������������1�ĸ���

int main()
{
	int num;
	cin >> num;
	int maxn = 0;
	int n = 0;
	int i = 0;
	while (num)
	{
		while (num && num % 2 == 1)
		{
			n++;
			num /= 2;
		}
		num /= 2;
		maxn = max(n, maxn);
		n = 0;
	}
	cout << maxn << endl;

	system("pause");
	return 0;
}