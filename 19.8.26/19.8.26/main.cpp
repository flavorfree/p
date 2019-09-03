#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void func(int &a,int & b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}


int main1()
{
	const int a = 10;
	const int & ra = a;
	double b = 1.23;
	double &rb = b;

	///*int ming = 5;
	//int &xiaoming = ming;

	//cout << &ming << endl;
	//cout << &xiaoming << endl;
	//cout << xiaoming << endl;*/

	///*int a = 5, b = 6;
	//func(a, b);
	//printf("%d %d", a,b);*/

	system("pause");
	return 0;
}