#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void InsertSort(int* a, int n)
{
	int end=0;
	for (end; end < n-1; end++)
	{
		int tmp = a[end + 1];//Ҫ������Ǹ���
		while (end >= 0)
		{
			if (a[end] > tmp)//�Ƚ�
			{
				a[end + 1] = a[end];//����ƶ�
				end--;
			}
			else
				break;//�ҵ���tmpС�ڵ�λ��
		}
		a[end + 1] = tmp;//��tmp�����ҵ�С��tmp����λ�õĺ���
	}
}

int main()
{
	int a[] = { 3, 6, 1, 9, 7, 2, 5, 4, 8 };
	InsertSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}