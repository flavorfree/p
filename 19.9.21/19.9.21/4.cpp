#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	Date(int year = 2019, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//Date(const Date& d)//拷贝构造函数的参数只有一个且必须使用引用传参。
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}
//private:
	int _year;
	int _month;
	int _day;
};

//int main4()
//{
//	Date d1;
//	Date d2(d1);
//	return 0;
//}

bool operator == (const Date& d1, const Date& d2)
{
	return d1._year == d2._year
	&& d1._month == d2._month
	&& d1._day == d2._day;
}

void Test()
{
	Date d1(2019, 9, 25);
	Date d2(2019, 9, 26);
	cout << (d1 == d2) << endl;

}
int main()
{
	Test;
	return 0;
}