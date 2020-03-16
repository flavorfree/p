#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main2()
{
	char* sz = "abcde";
	sz += 2;
	printf("%lu\n", sz);
 	return 0;
}