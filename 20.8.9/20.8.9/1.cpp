#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

int QuickSort(int* a, int begin,int end)
{
	int key = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] < key)
			begin++;
		a[end] = a[begin];
		while (begin < end && a[end] > key)
			end--;
		a[begin] = a[end];
	}
	a[begin] = key;
	return begin;
}

void Quick(int *a, int begin,int end)
{
	if (begin >= end)
		return;


	int mid = QuickSort(a, begin, end);

	Quick(a, begin, mid-1);
	Quick(a, mid + 1, end);
}

int main()
{
	int a[] = { 4, 8, 2, 6, 0, 9, 1, 3, 5, 7 };
	Quick(a,0, sizeof(a) / sizeof(a[0])-1);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]-1); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}