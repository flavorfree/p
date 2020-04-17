#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		static int monthDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if (month == 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			return 29;//闰年2月是29天
		}
		return monthDays[month];
	}

	Date(int year = 0, int month = 1, int day = 1)
	{
		if (year >= 0 
			&& month >= 1 && month <= 12
			&& day >=1 && day <= GetMonthDay(year,month))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "非法日期：";
		}
	}
	    
	Date(const Date& d)//拷贝构造
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	//d1 < d2
	//d1.operator < (&d1,d2)	d1是隐含的
	bool operator < (const Date& d) //bool operator < (Date* this, const Date& d)
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

	//d1 <= d2; -》 d1<d2 || d1==d2;
	//d1.operator <= (&d1,d2)	d1是隐含的
	bool operator <= (const Date& d) //bool operator <= (Date* this, const Date& d)
	{
		return *this < d || *this == d; //*this就是d1,复用上面的代码来实现
	}

	//d1>d2;  ->  !(d1<=d2);
	bool operator > (const Date& d)
	{
		return !(*this <= d);//!是逻辑取反
	}

	bool operator >= (const Date& d)
	{
		return !(*this < d);//!是逻辑取反
	}

	bool operator != (const Date& d)
	{
		return !(*this == d);//!是逻辑取反
	}

	////d1+10,d1+100,d1+1000
	//Date operator+(int day)
	//{
	//	Date ret(*this);//用d1拷贝构造ret，等价于Date ret = *this;
	//	ret._day += day ;
	//	while (ret._day > GetMonthDay(ret._year, ret._month))
	//	{

	//			ret._day -= GetMonthDay(ret._year, ret._month);
	//			ret._month++;

	//		if (ret._month == 13)
	//		{
	//			ret._year++;
	//			ret._month = 1;
	//		}
	//	}
	//	return ret;
	//}
	Date operator+(int day)//d1+10,复用+=代码是实现
	{
		Date ret(*this);
		ret += day;	//ret.operator+=(day)

		return ret;
	}

	Date& operator+=(int day)//d1+=10
	{
		if (day < 0)//防止加的是负数
		{
			return *this -= -day;
		}
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{

			_day -= GetMonthDay(_year, _month);
			_month++;

			if (_month == 13)
			{
				++_year;
				_month = 1;
			}
		}
		return *this;
	}

	Date& operator -= (int day)//d1-=10
	{
		if (day < 0)//防止减的是负数
		{
			return *this += -day;
		}
		_day -= day;
		while (_day <= 0)
		{
			_month--;
			if (_month == 0)
			{
				_month = 12;
				_year--;
			}
			_day += GetMonthDay(_year, _month);
		}
		return *this;
	}

	//Date operator - (int day)//d1-10
	//{
	//	Date ret(*this);
	//	ret._day -= day;
	//	while (ret._day <= 0)
	//	{
	//		ret._month--;
	//		if (ret._month == 0)
	//		{
	//			ret._month = 12;
	//			ret._year--;
	//		}
	//		ret._day += GetMonthDay(ret._year, ret._month);
	//	}
	//	return ret;
	//}
	Date operator-(int day)//d1-10
	{
		Date ret(*this);
		ret -= day;

		return ret;
	}

	//++d1 =》 d1.operator++(&d1)
	Date& operator ++ ()//++d1,前置加加
	{
		*this += 1;
		return *this;//返回加之后的值
	}
	//d1++ => d1.operator++(&d1, 0)
	Date operator ++ (int)//d1++,后置加加，为了构成函数重载，加入int形参（不会使用）；
	{
		Date ret(*this);
		*this += 1;

		return ret;//返回加之前的值
	}

	Date& operator -- ()//--d1
	{
		*this -= 1;
		return *this;
	}
	Date operator -- (int)//d1--
	{
		Date ret(*this);
		*this -= 1;

		return ret;
	}

	int operator - (const Date& d);//d1-d2

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year; 
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.Print();

	Date d2(2020, 4, 11); 
	d2.Print();

	Date d3(2021, 2, 29);//非法日期会出现随机值
	d3.Print();

	cout << (d1 < d2) << endl;//<<的优先级大于<的优先级，所以用括号括起来
	cout << (d1 > d2) << endl;
	cout << (d1 == d2) << endl;
	cout << (d1 != d2) << endl;
	cout << (d1 <= d2) << endl; 
	cout << (d1 >= d2) << endl;

	//是否要重载一个运算符，看的是这个运算符是否对这个类的对象有意义；

	Date d4 = d2 + 1000;
	d4.Print();

	system("pause");
	return 0;
}