#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void Swap(int* p1, int* p2)
{
	int tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

int Hoare(int* a,int begin,int end)//hoare��������ָ�뷨��
{
	int key = a[end];
	int keynum = end;//key���±�
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)//�ұ�keyֵ���
			begin++;
		while (begin < end && a[end] >= key)//�ұ�keyֵС��
			end--;
		
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[begin], &a[keynum]);
	
	return begin;
}

int DigPit(int *a, int begin, int end)//�ڿӷ�
{
	int key = a[end];
	while (begin < end)
	{
		while (begin < end && a[begin] <= key)//�ұ�keyֵ���
			begin++;
		a[end] = a[begin];
		while (begin < end && a[end] >= key)//�ұ�keyֵС��
			end--;
		a[begin] = a[end];
	}

	a[begin] = key;
	
	return begin;
}

int PrevCur(int* a, int begin, int end)//ǰ��ָ�뷨
{
	int prev = begin - 1;
	int cur = begin;
	int key = a[end];
	while (cur < end)//�ѱ�keyֵС����ȫ����ǰ��
	{
		if (a[cur] < key)
		{
			prev++;
			Swap(&a[cur], &a[prev]);
		}
		cur++;
	}

	prev++;
	Swap(&a[end], &a[prev]);
	return prev;
}

void QuickSort(int* a,int begin,int end)
{
	if (begin >= end)
		return;

	int keynum = Hoare(a, begin,end);
	//int keynum = DigPit(a, begin, end);
	//int keynum = PrevCur(a, begin, end);
	//[begin	keynum-1] keynum [keynum+1	end]

	QuickSort(a, begin, keynum - 1);//key���		
	QuickSort(a, keynum + 1, end);//key�ұ�
}


int main()
{
	int a[] = { 9, 2, 3, 4, 8, 4, 1, 7, 5, 6 };
	QuickSort(a, 0, sizeof(a) / sizeof(int)-1);
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}