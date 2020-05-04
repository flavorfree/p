#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	int MonthDay(int year, int month)
	{
		static int monthday[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
		{
			return 29;
		}
		return monthday[month];
	}

	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0
			&& month >= 1 && month <= 12
			&& day >= 1 && day <= MonthDay(year, month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
			cout << "非法日期" << endl;
	}

	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	void print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
		
	bool operator < (const Date& d)	//d1<d2
	{
		if (_year < d._year)
			return true;
		else if (_year == d._year && _month < d._month)
			return true;
		else if (_year == d._year && _month == d._month && _day < d._day)
			return true;
		else
			return false;
	}

	bool operator == (const Date& d)
	{
		return _year == d._year && _month == d._month && _day == d._day;
	}

	bool operator != (const Date& d)
	{
		return !(*this == d);
	}

	bool operator >= (const Date& d)
	{
		return !(*this < d);
	}

	bool operator <= (const Date& d)
	{
		return *this < d || *this == d;
	}

	bool operator > (const Date& d)
	{
		return !(*this <= d);
	}

	Date& operator += (int day)
	{
		if (day < 0)	//防止day为负数
			return *this -= (-day);

		_day += day;
		while (_day > MonthDay(_year, _month))
		{
			_day -= MonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}		
		}
		return *this;
	}

	Date operator + (int day)
	{
		Date ret = *this;
		ret += day;

		return ret;
	}

	Date& operator -= (int day)
	{
		if (day < 0)	//防止day为负数
			return *this += (-day);

		_day -= day;
		while (_day < 0)
		{
			_month--;
			if (_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day += MonthDay(_year, _month);
		}
		return *this;
	}

	Date operator - (int day)
	{
		Date ret = *this;
		ret -= day;

		return ret;
	}

	Date& operator ++ ()	//前置++
	{
		*this += 1;

		return *this;
	}
	Date operator ++ (int)	//后置++
	{
		Date ret = *this;
		*this += 1;

		return ret;
	}

	Date& operator -- ()	//前置--
	{
		*this -= 1;

		return *this;
	}
	Date operator -- (int)	//后置--
	{
		Date ret = *this;
		*this -= 1;

		return ret;
	}

	int operator - (const Date& d) //d1-d2
	{
		Date max = *this;
		Date min = d;
		int flag = 1;
		if (min > max)
		{
			max = d;
			min = *this;
			flag = -1;
		}
		int day = 0;
		while (max != min)
		{
			min++;
			day++;
		}
		return day*flag;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.print();

	Date d2(2020, 5, 4);
	d2.print();

	Date d3(d2);
	d3.print();

	cout << (d1 < d2) << endl;
	cout << (d1 > d2) << endl;
	cout << (d1 == d2) << endl;
	cout << (d1 <= d2) << endl;
	cout << (d1 >= d2) << endl;
	cout << (d1 != d2) << endl;

	d2 += 31;
	d2.print();

	system("pause");
	return 0;
}