#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}
	
void AdjustDown(int* a, int n, int root)//���µ����㷨
{
	int parent = root;
	int child = parent * 2 + 1;//����
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])//�Һ��Ӵ��ڵ�����£��Ƚ����Һ��ӵĴ�С
		{
			child++;
		}
		if (a[child] > a[parent])//�ϴ�ĺ����븸�׽��бȽ�
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

void HeapSort(int*a, int n)//������
{
	//�ȹ�����ѣ�����
	//�����һ����Ҷ�ӽڵ���������ʼ���µ��������������ڵ����
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