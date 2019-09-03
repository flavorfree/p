#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int& Add(int a, int b) 
{
	int c = a + b;
	return c;
}

int main4() 
{
	int& ret = Add(1, 2);
	Add(3, 4);
	cout << "Add(1, 2) is :" << ret << endl;

	system("pause");
	return 0;
}
