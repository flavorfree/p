#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void func(int a = 10, int b = 20, int c = 30)//缺少参数只能在参数列表的最后
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}
 
void swapArgs(int * pa, int * pb)
{
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
void swapArgs(float * pa, float * pb)
{
	float tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int add(short a, short b)
{
	return a + b;
}

int main()
{
	func();
	func(2);

	int a = 4, b = 7;
	float c = 3.14, d = 1.618;

	swapArgs(&a, &b);
	swapArgs(&c, &d);

	cout << a << " " << b << endl;
	cout << c << " " << d << endl;

	system("pause");
	return 0;
}

