#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

class Test2{
public:
	int b;

	Test2(int i)
	{
		b = i;
	}

	Test2(Test2 & t)
	{
		b = t.b;
	}
};

class Test{
public:
	const int i;
	int &ri;
	Test2 t2;
	Test(int &a) : i(3), ri(a), t2(a)//冒号后面是初始化，大括号里是赋值
	{

	}
};

int main()
{
	int c;
	Test b(c);

	system("pause");
	return 0;
}