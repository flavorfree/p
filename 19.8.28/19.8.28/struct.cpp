#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

struct A1
{
	char a;
	//int a;
	//double b;
};
struct A2
{
	A1 a;
	char b;
};
struct A3//结构体里排序，必需按从小到大，或从大到小排序，为了不浪费空间
{
	char c;
	int a;
	double b;

	void printA()//成员函数中可以直接使用自己的成员变量
	{
		printf("%d\n", a);
	}
	void printB();
};
void A3::printB()//指定用A3的域
{
	printf("%.2lf\n", b);
}

int main()
{
	printf("%d %d %d\n", sizeof(A1), sizeof(A2), sizeof(A3));//16,24,16


	A3 test;
	test.a = 5;
	test.printA();
	test.b = 3.14;
	test.printB();
	system("pause");
	return 0;
}