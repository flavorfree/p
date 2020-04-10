#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap >1)
	{
		gap = gap / 3 + 1;
		int end = 0;
		for (int start = 0; start <gap; start++)
		{
			while (end < n - gap)
			{
				if ((a[end] >a[end + gap]))
				{
					while (end >= 0 && a[end] > a[end + gap])
					{
						Swap(&a[end], &a[end + gap]);
						end -= gap;
					}
				}
				end += gap;
			}
		}
	}
}

int main()
{
	int a[] = { 3, 9, 2, 6, 1, 5, 8, 7, 4 };
	ShellSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}