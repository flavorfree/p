#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
	
void AdjustDown(int* a, int n, int root)//向下调整算法
{
	int parent = root;
	int child = parent * 2 + 1;//左孩子
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])//右孩子存在的情况下，比较左右孩子的大小
		{
			child++;
		}
		if (a[child] > a[parent])//较大的孩子与父亲进行比较
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}

void HeapSort(int*a, int n)//堆排序
{
	//先构建大堆（升序）
	//从最后一个非叶子节点所在树开始向下调整，调整到根节点结束
	int root = (n -1-1)/2;
	for (root; root >= 0; root--)
	{
		AdjustDown(a, n, root);
	}
	
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}

int main()
{
	int a[] = { 9, 2, 3, 4, 8, 4, 1, 7, 5, 6 };
	HeapSort(a, sizeof(a) / sizeof(int));

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}