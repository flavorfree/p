#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int Quick(int* a, int begin, int end)
{
	int key = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)
			begin++;
		a[end] = a[begin];
		while (begin < end && a[end] >= key)
			end--;
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}

void QuickSort(int* a,int begin,int end)
{
	if (begin >= end)
		return;

	int mid = Quick(a, begin, end);

	QuickSort(a, begin, mid-1);
	QuickSort(a, mid + 1, end);
}

int main6()
{
	int a[] = { 4, 8, 2, 0, 1, 9, 7, 5, 6 ,3};
	QuickSort(a,0,sizeof(a)/sizeof(a[0])-1);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}