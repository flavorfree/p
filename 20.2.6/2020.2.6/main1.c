#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int  num = 10;
	int* p = &num;
	// int* �����������ͣ���int double���й�ϵ��
	printf("%p \n", p);
	printf("%d \n", *p);
	// * ��ӷ��������/������
	printf("%d \n", sizeof(p));//int* ռ4 ���ֽ�

	double num2 = 10;
	double* p2 = &num2;
	printf("%d \n", sizeof(p2));//double*ռ4���ֽ�
	system("pause");
	return 0;
}