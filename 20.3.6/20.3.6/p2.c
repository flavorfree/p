#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void func(char str_arg[2])
{
	int m = sizeof(str_arg);
	int n = strlen(str_arg);
	printf("%d\n", m);//4
	printf("%d\n", n);//5
}

int main2()
{
	char str[] = "Hello";
	func(str);
	printf("%d\n", sizeof(str));//6
	printf("%d\n", strlen(str));//5
	system("pause");
	return 0;
}