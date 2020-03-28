#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp=a[end+1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end+1] = tmp;
	}
}

int main()
{
	int a[] = { 9, 2, 3, 4, 8, 4, 1, 7, 5, 6 };
	InsertSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}