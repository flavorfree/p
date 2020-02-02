#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main3()
{
	int i[6] = { 6, 1, 2, 3, 4, 5 };
	int a,b;
	cin >> a;
	for (b = 0; b < 6; b++)
	{
		if (i[b] == a)
		{
			cout << b << endl;
		}
	}
	system("pause");
	return 0;
}