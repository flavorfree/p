#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main3()
{
	int arr[10] = { 1, 2, 3, 4 };
	int* p = arr;
	//int* p = &arr;
	printf("%p \n", p);//0096FE88,µÿ÷∑
	printf("%d \n", *p);//1

	printf("%d \n", *(p + 1));
	printf("%d \n", p[1]);

	p = p + 1;
	printf("%p \n", p);//0096FE8C£¨µÿ÷∑
	printf("%d \n", *p);//2

	system("pause");
	return 0;
}