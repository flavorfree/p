#define _CRT_SECURE_NO_WARNINGS 1


#include<iostream>
#include<fstream>//�ļ���
using namespace std;

class FTest{
	int m_a;
	int m_b;
public:
	FTest() :
		m_a(0),
		m_b(0)
	{

	}
	void setNum(int a, int b);

	friend ostream & operator << (ostream & os, FTest & data);
};

void FTest::setNum(int a, int b)
{
	m_a = a;
	m_b = b;
}

ostream & operator << (ostream & os, FTest & data)//����������
{
	os << data.m_a << ' ' << data.m_b;
	return os;
}

class A{
	class B{
		int a;
		int b;
	public:
		B() :
			a(0),
			b(0)
		{ 

		}
	}a;
	int b;
public:
	A():
		a(),
		b(0)
	{

	}
};

int main()
{
	FTest ft(2, 3);
	ofstream os("1.txt");

	cin >> ft;

	operator<<(cout, ft);

	

	cout << ft << endl;//cout��һ�ε���һ�Σ�û��printfЧ�ʸ�

	return 0;
}