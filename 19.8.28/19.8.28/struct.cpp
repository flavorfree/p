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
struct A3//�ṹ�������򣬱��谴��С���󣬻�Ӵ�С����Ϊ�˲��˷ѿռ�
{
	char c;
	int a;
	double b;

	void printA()//��Ա�����п���ֱ��ʹ���Լ��ĳ�Ա����
	{
		printf("%d\n", a);
	}
	void printB();
};
void A3::printB()//ָ����A3����
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