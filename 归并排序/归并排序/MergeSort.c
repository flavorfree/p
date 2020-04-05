#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void _MergeSort(int* a, int begin, int end,int* tmp)
{
	if (begin >= end)
		return;
	//拆分
	int mid = (begin + end) >> 1;

	_MergeSort( a, begin, mid,tmp);
	_MergeSort(a, mid + 1, end,tmp);
	
	//合并
	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			tmp[i++] = a[begin1++];
		else
			tmp[i++] = a[begin2++];
	}
	while (begin1<=end)
		tmp[i++] = a[begin1++];
	while (begin2<=end2)
		tmp[i++] = a[begin2++];

	//将归并到tmp中的数据并归并回到原数组
	memcpy(a+begin, tmp+begin,sizeof(int)*(end-begin+1));
}

void MergeSort(int*a, int n)
{
	int* tmp = (int*)malloc(sizeof(int)*n);
	_MergeSort(a, 0, n - 1, tmp);
}

int main()
{
	int a[] = { 9, 2, 3, 4, 8, 4, 1, 7, 5, 6 };
	MergeSort(a,sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}