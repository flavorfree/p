#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int Digpit(int* a, int begin,int end)//ÍÚ¿Ó·¨
{
	int tmp = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] <= tmp)
			begin++;
		a[end] = a[begin];
		while (begin<end && a[end] >= tmp)
			end--;
		a[begin] = a[end];
	}
	a[begin] = tmp;
	return begin;
}

void QuickSort(int* a, int begin, int end)
{
	
	if (begin >= end)
		return;

	int tmp = Digpit(a, begin, end);

	QuickSort(a, begin, tmp - 1);
	QuickSort(a, tmp + 1, end);
}

int main()
{
	int a[] = { 7, 2, 6, 1, 5, 3, 8, 4, 9 };
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}