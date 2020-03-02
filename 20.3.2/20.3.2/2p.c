#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Fibonaci(int a)
{
	int n1 = 0;
	int n2 = 1;
	int f = 0;

	for (int i = 3; i <= a; ++i)
	{
		f = n1 + n2;
		n1 = n2;
		n2 = f;
	}
	if (a == 1)
	{
		printf("%d\n", 0);
	}
	else if (a == 2)
	{
		printf("%d\n", 1);
	}
	else
	{
		printf("%d\n", f);

	}
}

int main3()
{
	int a;
	scanf("%d", &a);
	Fibonaci(a);

	char ab[] = "hello\0world";
	printf("%d", sizeof(ab));

	system("pause");
	return 0;
}