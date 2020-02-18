#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

struct S
{
	int data[100];
	int num;
};

void* print(struct S* s)
{
	printf("%d", s->num);
}

int main2()
{
	struct S s = { { 1, 2, 3, 4 }, 100 };
	print(&s);//结构体传参的时候，要穿结构体的地址
	system("pause");
	return 0;
}