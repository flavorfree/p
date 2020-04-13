#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void BubbleSort(int* a, int n)
{
	while (n)
	{
		int start = 0;
		int flag = 0;//查看是否数组已有序
		while (start < n - 1)
		{
			if (a[start] > a[start + 1])
			{
				flag = 1;
				Swap(&a[start], &a[start + 1]);
			}
				
			start++;
		}
		if (flag == 0)
			break;
		n--;
	}
}

int main1()
{
	int a[] = { 3, 9, 6, 2, 8, 5, 1, 4, 7 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}