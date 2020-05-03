#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap3(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int AdjustDown(int* a, int root, int n)
{
	int child = root * 2 + 1;
	while (child <= n)
	{
		if (child + 1 <= n && a[child + 1] > a[child])
			child++;
		if (a[child] > a[root])
		{
			Swap3(&a[root], &a[child]);
			root = child;
			child = root * 2 + 1;
		}
		else
			break;
			
	}
}

void HeapSort(int* a, int n)
{
	int root = (n-1) / 2;
	for (root; root >= 0;root--)
	{
		AdjustDown(a, root, n);
	}
	while (n)
	{
		Swap3(&a[0], &a[n]);
		n--;
		AdjustDown(a, 0, n);
	}
		

}

int main4()
{
	int a[] = { 7, 2, 6, 1, 5, 3, 8, 4, 9 };
	HeapSort(a, sizeof(a) / sizeof(int)-1);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}