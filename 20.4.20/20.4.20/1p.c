#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
//����һ�� 32 λ���з�������������Ҫ�����������ÿλ�ϵ����ֽ��з�ת��
int main()
{
	int x = 123;
	int max = 2147483647 ;
	int min = -2147483647;
	long num = 0;
	while (x)
	{
		num = num * 10 + x % 10;
		x /= 10;
	}
	printf("%d", num > max || num < min ? 0 : num);
	system("pause");
	return 0;
}