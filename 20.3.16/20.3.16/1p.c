#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main1()
{

	unsigned long p[] = { 6, 7, 8, 9, 10 };
	unsigned long *pt;
	pt = p;
	*(pt+2) += 2;
	printf("%d,%d\n", *pt, *(pt + 2));
	system("pause");
	return 0;
}