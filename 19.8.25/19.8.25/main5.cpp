#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

//short Add(short left, short right)
//{
//	return left + right;
//}
//
//int Add(short left,short right) 
//{
//	return left + right; 
//}
//
//int main()
//{
//	Add(3, 5);
//	Add(2, 4);
//
//	system("pause");
//	return 0;
//}

//int Add(int left, int right);
//double Add(double left, double right);

int Add(int left, int right)
{
	return left + right;
}

double Add(double left, double right)
{
	return left + right;
}

long Add(long left, long right) 
{
	return left + right; 
}

int main5()
{
	Add(10, 20);
	Add(10.0, 20.0);
	Add(10L, 20L);

	system("pause");
	return 0;
}

