#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void CelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	
	while (begin < end)
	{
		int min = begin, max = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] >a[max])
				max = i;
			if (a[i] < a[min])
				min = i;
		}
		Swap(&a[begin], &a[min]);
		if (a[max] > a[min])
		{
			Swap(&a[end], &a[max]);
		}
		begin++;
		end--;
	}
}

int main()
{
	int a[] = { 3, 5, 9, 2, 4, 6, 1, 7, 8 };
	CelectSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}