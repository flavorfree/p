#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int year, month, day;
	cin >> year;
	cin >> month;
	cin >> day;
	int every_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
		every_month[2] += 1;
	int num = 0;
	num += day;
	while (month--)
	{
		num += every_month[month];
	}
	cout << num << endl;
	system("pause");
	return 0;
}