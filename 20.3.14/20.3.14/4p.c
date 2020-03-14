#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void JudgeNum(int a)
{
	int n = a;
	int num = 0;
	while (a)
	{
		num = num * 10 + a % 10;
		a = a / 10;
	}

	if (num == n)
	{
		printf("是回文数\n");
	}
	else
	{
		printf("不是回文数\n");
	}
}

int main()
{
	int a;
	scanf("%d", &a);
	JudgeNum(a);

	system("pause");
	return 0;
}