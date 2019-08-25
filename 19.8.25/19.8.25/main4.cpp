#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void func(int a = 10)
{
	cout << a << endl;
}

void test(int a = 3, int b = 4, int c = 5)
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}
void test1(int a, int b, int c = 5)
{
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "c= " << c << endl;
}

int main4()
{
	func();//没有传参时，使用参数的默认值
	func(2);//传参时，使用指定的实参
	test(7);
	test1(8, 9);
	system("pause");
	return 0;
}