#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d", n % 10);
}

int main2()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}