#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void printlog(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}

int main2()
{
	int a[5] = { 0, 1, 2, 3, 4 };
	int b[5] = { 5, 6, 7, 8, 9 };
	int tmp;

	printlog(a, 5);
	printlog(b, 5);

	for (int i = 0; i < 5; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}

	printlog(a, 5);
	printlog(b, 5);

	system("pause");
	return 0;
}