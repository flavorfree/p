#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	char a[] = "abcdefg";
	char b[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(b));
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(b));
	system("pause");
	return 0;
	
}