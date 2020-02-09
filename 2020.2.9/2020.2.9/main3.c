#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct S{
	int data[100];
	int num;
};

struct S s = { { 1, 2, 3, 4 }, 100 };

void print2(struct S* s)//结构体地址传参
{
	printf("%d\n", s->num);
}

int main()
{
	print2(&s);//传地址
	system("pause");
	return 0;
}