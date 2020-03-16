#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void f(int b[][3])
{
	++b;
	b[1][1] = 9;
}

int main3()
{
	int a[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	f(a);
	printf("%d", a[2][1]);
	return 0;
}