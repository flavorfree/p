#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void print(int* a)
{
	//int sz = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
}

int main3()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	print(a);
	/*for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%s ", a[i]);
	}*/
	system("pause");
	return 0;
}