#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void InsertSort(int* a,int n)
{
	int end = 0;
	while (end<n)
	{
		int tmp = a[end];
		int i = end - 1;
		for (i; i >= 0; i--)
		{
			if (a[i] > tmp)
				a[i + 1] = a[i];
			else
				break;
		}
		a[i + 1] = tmp;
		end++;
	}	
}

int main1()
{
	int a[] = { 2, 9, 6, 1, 5, 3, 8, 4, 7 };
	InsertSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}