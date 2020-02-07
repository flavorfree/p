#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int  num = 10;
	int* p = &num;
	// int* 基本数据类型（与int double并列关系）
	printf("%p \n", p);
	printf("%d \n", *p);
	// * 间接访问运算符/解引用
	printf("%d \n", sizeof(p));//int* 占4 个字节

	double num2 = 10;
	double* p2 = &num2;
	printf("%d \n", sizeof(p2));//double*占4个字节
	system("pause");
	return 0;
}