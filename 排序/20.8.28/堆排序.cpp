#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
using namespace std;

void AdjustDown(int*a,int n, int root)
{
	int child = root * 2 + 1;//×óº¢×Ó
	while (child < n )
	{
		if (child + 1 < n && a[child] < a[child + 1])
			child++;
		if (a[root] < a[child])
		{
			swap(a[root], a[child]);
			root = child;
			child = root * 2 + 1;
		}
		else
			break;
	}
	
}

void HeapSort(int* a,int n)
{
	int root = (n - 1) / 2;
	for (root; root >= 0; root--)
	{
		AdjustDown(a, n, root);
	}

	int end = n - 1;
	while (end > 0)
	{
		swap(a[end], a[0]);
		AdjustDown(a, end, 0);
		end--;
	}
}

int main4()
{
	int a[] = { 4, 5, 2, 7, 9, 1, 0, 6, 8, 3 };
	HeapSort(a, sizeof(a) / sizeof(a[0]));
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}