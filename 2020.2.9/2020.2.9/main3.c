#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct S{
	int data[100];
	int num;
};

struct S s = { { 1, 2, 3, 4 }, 100 };

void print2(struct S* s)//�ṹ���ַ����
{
	printf("%d\n", s->num);
}

int main()
{
	print2(&s);//����ַ
	system("pause");
	return 0;
}