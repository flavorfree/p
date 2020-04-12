#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void AdjustDown(int*a, int end, int root)
{
	int child = root * 2 +1;
	while (child <= end)//�����
	{
		if (child+1 <= end && a[child] < a[child + 1])//�ҽϴ�ĺ���
			child++;
		if (a[child] > a[root])//�����븸�׽��бȽ�
		{
			Swap(&a[root], &a[child]);
			root = child;
			child = root * 2 + 1;
		}
		else
			break;
	}
}

void HeapSort(int* a, int n)
{
	int leaves = (n - 1 - 1) / 2;//���һ����Ҷ�ӽ��
	for (int i = leaves; i >= 0; i--)
	{
		AdjustDown(a, n-1, i);
	}
	int tmp = n - 1;
	while (tmp >= 0)
	{
		
		Swap(&a[0], &a[tmp]);
		AdjustDown(a, tmp-1, 0);
		tmp--;
	}


}

int main()
{
	int a[] = { 9, 3, 2, 4, 8, 1, 7, 6, 5 };
	HeapSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}