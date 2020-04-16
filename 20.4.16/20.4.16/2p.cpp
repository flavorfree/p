#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int main()
{
	int z, y, x;
	for (int i = 100; i < 1000; i++)
	{
		z = i / 100;
		y = (i % 100 )/ 10;
		x = i % 10;
		if (i == z*z*z + y*y*y + x*x*x)
		{
			cout << i << " 是水仙花数" << endl;
		}
	}
	
	system("pause");
	return 0;
}