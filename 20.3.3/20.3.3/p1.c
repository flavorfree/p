#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int x = 3;

void inc()
{
	static int x = 1;

	x *= (x + 1);
	printf("%d\n", x);
}

int main()
{
	int i;
	int a = 4;
	for (i = 1; i < x; i++)
	{
		inc();
	}
	
	system("pause");
	return 0;
}