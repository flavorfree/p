#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int DigPitSort(int* a, int begin, int end)
{
	int tmp = a[end];
	while (begin < end)
	{
		while (a[begin] < tmp && begin < end)
			begin++;
		if (begin < end)
			a[end] = a[begin];
		else
			break;
		while (a[end] > tmp && end > begin)
			end--;
		if (begin < end)
			a[begin] = a[end];
		else
			break;
	}
	a[begin] = tmp;
	return begin;
}

void QuickSort(int* a, int begin, int end)
{
	if (begin >= end)
		return;
	int mid = DigPitSort(a, begin, end);
	
	QuickSort(a, begin, mid-1);
	QuickSort(a, mid + 1, end);

}

int main()
{
	int a[] = { 3, 9, 6, 2, 8, 5, 1, 4, 7 };
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	//DigPitSort(a, 0, sizeof(a) / sizeof(int)-1);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}