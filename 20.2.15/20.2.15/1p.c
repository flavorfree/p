#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int* p = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(p - 1));
	system("pause");
	return 0;
}
