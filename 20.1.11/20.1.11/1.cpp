#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string>

int main1()
{
	printf("%d\n", strlen("abcdef"));//6,\32被解析成一个转义字符
	printf("%d\n", strlen("c:\test\328\test.c"));//14,
	return 0;
}