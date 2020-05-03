#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap2(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void CelectSort(int* a, int n)
{
	int begin = 0, end = n - 1;
	
	while (begin <= end)
	{
		int min=begin, max=end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i] < a[min])
				min = i;
			if (a[i] > a[max])
				max = i;
		}
		Swap2(&a[begin], &a[min]);
		if (a[max]>a[min])
			Swap2(&a[end], &a[max]);
		begin++;
		end--;
	}
}

int main3()
{
	int a[] = { 2, 9, 6, 1, 5, 3, 8, 4, 7 };
	CelectSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}