#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct S{
	int data[100];
	int num;
};

struct S s = { { 1, 2, 3, 4 }, 100 };

void print1(struct S s)//结构体传参
{
	printf("%d\n", s.num);
}

int main()
{
	print(s);//传结构体
	system("pause");
	return 0;
}