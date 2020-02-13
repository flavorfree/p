#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

struct s
{
	int data[1000];
	int num;
};

void print1(struct s s)
{
	printf("%d\n", s.num);
}

void print2(struct s* s)
{
	printf("%d\n", s->num);
}

int main1()
{
	struct s s = { (1, 2, 3, 4), 1000 };
	print1(s);
	print2(&s);

	system("pause");
	return 0;
}