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
			return 29;//����2����29��
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
			cout << "�Ƿ����ڣ�";
		}
	}
	    
	Date(const Date& d)//��������
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}

	//d1 < d2
	//d1.operator < (&d1,d2)	d1��������
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

	//d1 <= d2; -�� d1<d2 || d1==d2;
	//d1.operator <= (&d1,d2)	d1��������
	bool operator <= (const Date& d) //bool operator <= (Date* this, const Date& d)
	{
		return *this < d || *this == d; //*this����d1,��������Ĵ�����ʵ��
	}

	//d1>d2;  ->  !(d1<=d2);
	bool operator > (const Date& d)
	{
		return !(*this <= d);//!���߼�ȡ��
	}

	bool operator >= (const Date& d)
	{
		return !(*this < d);//!���߼�ȡ��
	}

	bool operator != (const Date& d)
	{
		return !(*this == d);//!���߼�ȡ��
	}

	////d1+10,d1+100,d1+1000
	//Date operator+(int day)
	//{
	//	Date ret(*this);//��d1��������ret���ȼ���Date ret = *this;
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
	Date operator+(int day)//d1+10,����+=������ʵ��
	{
		Date ret(*this);
		ret += day;	//ret.operator+=(day)

		return ret;
	}

	Date& operator+=(int day)//d1+=10
	{
		if (day < 0)//��ֹ�ӵ��Ǹ���
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
		if (day < 0)//��ֹ�����Ǹ���
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

	//++d1 =�� d1.operator++(&d1)
	Date& operator ++ ()//++d1,ǰ�üӼ�
	{
		*this += 1;
		return *this;//���ؼ�֮���ֵ
	}
	//d1++ => d1.operator++(&d1, 0)
	Date operator ++ (int)//d1++,���üӼӣ�Ϊ�˹��ɺ������أ�����int�βΣ�����ʹ�ã���
	{
		Date ret(*this);
		*this += 1;

		return ret;//���ؼ�֮ǰ��ֵ
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

	Date d3(2021, 2, 29);//�Ƿ����ڻ�������ֵ
	d3.Print();

	cout << (d1 < d2) << endl;//<<�����ȼ�����<�����ȼ�������������������
	cout << (d1 > d2) << endl;
	cout << (d1 == d2) << endl;
	cout << (d1 != d2) << endl;
	cout << (d1 <= d2) << endl; 
	cout << (d1 >= d2) << endl;

	//�Ƿ�Ҫ����һ������������������������Ƿ�������Ķ��������壻

	Date d4 = d2 + 1000;
	d4.Print();

	system("pause");
	return 0;
}