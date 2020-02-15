#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int a[4] = { 1, 2, 3, 4 };
	int* p1 = (int*)(&a + 1);
	int* p2 = (int*)((int)a + 1);
	printf("%x,%x", p1[-1], *p2);
	system("pause");
	return 0;
}