#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;
#include<time.h>

struct A
{
	int a[10000];
};

void test1(A a)
{
	//return a;
}
void test2(A& a)
{
	//return a;
}
void TestRefAndValue()
{
	A a;

	// 以值作为函数参数   
	size_t begin1 = clock();   
	for (size_t i = 0; i < 10000; ++i)   
		test1(a);   
	size_t end1 = clock();

	// 以引用作为函数参数  
	size_t begin2 = clock(); 
	for (size_t i = 0; i < 10000; ++i)   
		test2(a);   
	size_t end2 = clock();

	// 分别计算两个函数运行结束后的时间
		cout << "test1(int*)-time:" << end1 - begin1 << endl; 
		cout << "test2(int&)-time:" << end2 - begin2 << endl;
}
int main3()
{
	A a;
	//int a = 3;
	//cout << test1(a) << endl;
	//cout << test2(a) << endl;

	for (int i = 0; i < 10000; i++)
	{
		TestRefAndValue();
	}

	system("pause");
	return 0;
}