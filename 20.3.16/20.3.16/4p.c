#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 10;
	long long t = sizeof(i++);
	printf("%d", i);
	return 0;
}