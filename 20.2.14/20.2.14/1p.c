#define _CRT_SECURE_NO_WARNINGS 1


//判断机器为大端字节序还是小端字节序

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int n = 1;
	char a = (char)n;
	//小端  01 00 00 00
	//大端  00 00 00 01

	if (a == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}

	system("pause");
	return 0;
}