#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
int main()
{
	int x = 123;
	int max = 2147483647 ;
	int min = -2147483647;
	long num = 0;
	while (x)
	{
		num = num * 10 + x % 10;
		x /= 10;
	}
	printf("%d", num > max || num < min ? 0 : num);
	system("pause");
	return 0;
}