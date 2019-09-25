#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	void SetDate(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	void Display()
	{
		cout << _year << "_" << _month << "_" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;

};

int _main()
{	
	Date d1;
	d1.SetDate(2019, 9, 23);
	d1.Display();

	Date d2;
	d2.SetDate(2019, 10, 1);
	d2.Display();

	system("pause");
	return 0;
}