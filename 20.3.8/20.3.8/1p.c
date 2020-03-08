#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void func(char s_arg[2])
{
	int m = sizeof(s_arg);//4
	int n = strlen(s_arg);//5
	printf("%d\n", m);
	printf("%d\n", n);
}

int main1()
{
	char s[] = "Hello";
	func(s);
	printf("%d",sizeof(s));//6
	system("pause");
	return 0;
}