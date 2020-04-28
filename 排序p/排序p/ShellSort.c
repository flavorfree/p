#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap1(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void ShellSort(int* a, int n)
{
	int gap=n;
	while (gap != 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n-gap; i++)
		{
			while(a[i]>a[i + gap])
			{
				Swap1(&a[i], &a[i + gap]);
				i -= gap;
				if (i < 0)
					break;
			}
		}	
	}
}

int main2()
{
	int a[] = { 2, 9, 6, 1, 5, 3, 8, 4, 7 };
	ShellSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}