#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int n;
	scanf("%d", &n);
	int tmp,sum;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			putchar(' ');
		}
		for (int j = 0; j < i*2-1; j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	for (int i = n-1; i > 0; i--)
	{
		for (int j = 0; j < n - i; j++)
		{
			putchar(' ');
		}
		for (int j = 0; j < i*2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}