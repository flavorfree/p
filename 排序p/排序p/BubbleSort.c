#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap4(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void BubbleSort(int* a, int n)
{
	
	while (n)
	{
		int end = 0;
		int flag = 0;
		while (end+1 < n)
		{
			if (a[end] > a[end + 1])
			{
				Swap4(&a[end], &a[end + 1]);
				flag = 1;
			}
				
			end++;
		}
		if (flag == 0)
			break;
		n--;	
	}
}

int main5()
{
	int a[] = { 7, 2, 6, 1, 5, 3, 8, 4, 9 };
	BubbleSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}