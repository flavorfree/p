#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4 };
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0] + 1);
	printf("%p\n", arr + 1);
	// &arr => int(*)[10];����ָ��ָ������������;
	printf("%p\n", &arr + 1);
	//&arr => ����ָ��
	int(*p)[10] = &arr;
	system("pause");
	return 0;
}