#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void BubbleSort(int* a, int n)
{
	while (n)
	{
		int flag = 0;
		for (int i = 0; i < n - 1; i++)//n-1是害怕i+1造成越界
		{
			if (a[i] > a[i + 1])
			{
				int tmp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		n--;
	}
}

int main()
{

	int a[] = { 9, 2, 3, 4, 8, 4, 1, 7, 5, 6 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}