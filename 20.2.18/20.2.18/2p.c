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
	print(&s);//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ
	system("pause");
	return 0;
}