#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main1()
{
	int year;
	cout << "������ݣ�";
	cin >> year;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		cout << "������" << endl;
	}
	else
	{
		cout << "��������" << endl;
	}

	system("pause");
	return 0;
}