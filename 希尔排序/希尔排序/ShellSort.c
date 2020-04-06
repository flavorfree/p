#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>



void ShellSort(int* a, int n)
{
	int gap = n ;
	//gap>1时为预排序	接近有序
	//gap==1时为直接插入排序	有序
	while (gap > 1)
	{
		gap = gap / 3 + 1;//间隔为gap的预排序，+1是保证最后一次一定是1
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end]; 
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

int main()
{
	int a[] = { 9, 2, 3, 4, 8, 4, 1, 7, 5, 6 };
	ShellSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}