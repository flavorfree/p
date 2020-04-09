#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void InsertSort(int* a, int n)
{
	int end=0;
	for (end; end < n-1; end++)
	{
		int tmp = a[end + 1];//要插入的那个数
		while (end >= 0)
		{
			if (a[end] > tmp)//比较
			{
				a[end + 1] = a[end];//向后移动
				end--;
			}
			else
				break;//找到了tmp小于的位置
		}
		a[end + 1] = tmp;//将tmp放于找到小于tmp数的位置的后面
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