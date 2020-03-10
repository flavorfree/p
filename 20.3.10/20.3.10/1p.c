#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	
	const int i = 0;
	int* j = (int *)&i;
	*j = 1;

	printf("%d,%d", i , *j);
	return 0;
}