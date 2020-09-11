#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void Merge(int* a,int begin,int end,int* p)
{
	if (begin >= end)
		return;

	int mid = (begin + end) / 2;
	Merge(a, begin, mid, p);
	Merge(a, mid + 1, end, p);

	int begin1 = begin, end1 = mid;
	int begin2 = mid + 1, end2 = end;
	int i = begin;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
			p[i++] = a[begin1++];
		else
			p[i++] = a[begin2++];
	}
	while (begin1 <= end1)
		p[i++] = a[begin1++];
	while (begin2 <= end2)
		p[i++] = a[begin2++];

	for (int i = 0; i <= end; i++)
	{
		a[i] = p[i];
	}
	//memcpy(a + begin, p + begin, sizeof(int)*(end - begin + 1));把p里的数据给回数组a
}

void MergeSort(int* a,int n)
{
	int *p = (int*)malloc(sizeof(int)* n);
	Merge(a, 0, n-1, p);
}

int main()
{
	int a[] = { 3, 8, 6, 1, 9, 2, 0, 5, 4, 7 };
	MergeSort(a, sizeof(a)/sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}