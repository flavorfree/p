#define _CRT_SECURE_NO_WARNINGS 1

//根据输入的日期，计算是这一年的第几天
#include<iostream>
using namespace std;

int main()
{
	int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int year, month, day;
	int date;
	while (cin >> year >> month >> day)//这样可以不断接收输入，直到按ctrl+c就结束
	{
		int d = 0;
		for (int i = 1; i<month; i++)//累加【1，month-1】月的天数
		{
			d += monthday[i];
		}
		d += day;
		if (month>2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))//判断该年是否为闰年
		{
			d++;
		}
		cout << d << endl;
	}
	return 0;
}