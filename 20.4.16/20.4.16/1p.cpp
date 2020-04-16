#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main1()
{
	int year;
	cout << "输入年份：";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << "是闰年" << endl;
	}
	else
	{
		cout << "不是闰年" << endl;
	}

	system("pause");
	return 0;
}