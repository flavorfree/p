#define _CRT_SECURE_NO_WARNINGS 1

//һ�������ж��Ԫ�أ�����������������

#include<stdio.h>
#include<stdlib.h>

int getMax(int* a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int tmp = 0;//��ʱ���ֵ
			for (int b = i; b <= j; b++)
			{
				tmp += a[b];
			}
			if (tmp >sum)
			{
				sum = tmp;
			}
		}
	}
	return sum;
}

int main2()
{
	int n = 0;
	scanf("%d", &n);
	int a[] = { 0 };
	for (int x = 0; x < n; x++)
	{
		a[x] = scanf("%d", a);
	}
	
	printf("%d", getMax(a, n));

	system("pause");
	return 0;
}