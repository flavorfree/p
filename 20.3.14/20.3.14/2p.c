#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main2()
{
	int j = 4;
	int i = j;
	for (; i <= 2 * j; i++)
	{
		switch (i / j)
		{
		case 0:
		case 1:
			printf("*");
			break;
		case 2:
			printf("#");
		}
	}
	return 0;
	system("pause");
	return 0;
}