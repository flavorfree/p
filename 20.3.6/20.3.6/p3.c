#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* p = (int*)((int)a + 1);
	printf("%x", p[0]);
	system("pause");
	return 0;
}