#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int* p1 =(int*)malloc(10*sizeof(int));
	p1[0] = 1;
	p1[1] = 2;
	int* p2 = (int*)realloc(p1, 20 * sizeof(int));
	printf("%p\n", p1);//00C29A70
	printf("%p\n", p2);//00C29A70
	
	free(p2);
	system("pause");
	return 0;
}