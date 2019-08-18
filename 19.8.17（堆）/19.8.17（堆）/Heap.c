#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void adjustDown(Heap*hp, int m)//向下调整算法
{
	int cur = m;
	int n;

	while (cur * 2 + 1 < hp->size)//判断是否有左孩子
	{
		if (cur * 2 + 2 >= hp->size)//如果没有右孩子的情况
		{
			n = cur * 2 + 1;
		}
		else
		{
			if (hp->data[cur * 2 + 1] > hp->data[cur * 2 + 2])//有右孩子了，比较左右孩子大小
			{
				n = cur * 2 + 1;
			}
			else
			{
				n = cur * 2 + 2;
			}
		}
		if(hp->data[cur] < hp->data[n])//父亲和较大的孩子进行比较
		{
			int tmp = hp->data[cur];
			hp->data[cur] = hp->data[n];//值的互换
			hp->data[n] = tmp;

			cur = n;//下标的互换
		}
		else//父亲比孩子都大则结束
		{
			break;
		}
	}

}


void HeapInit(Heap* hp, HPDataType* a, int n)//堆的建立
{
	hp->capacity = n * 2;
	hp->size = n;
	hp->data = (HPDataType *)calloc(hp->capacity, sizeof(HPDataType));//分配空间

	int i;
	for (i = 0; i < n; i++)
	{
		hp->data[i] = a[i];
	}
	for (i = n / 2 - 1; i >= 0; i--)
	{
		adjustDown(hp, i);
	}
}


void HeapDestory(Heap* hp)
{
	free(hp->data);
}


void HeapPrint(Heap* hp)
{

	int i;
	int a = 0, c = 2;

	for (i = 0; i < hp->size; i++)
	{
		printf(" %d ", hp->data[i]);
		if (i == a)
		{
			putchar('\n');
			a += c;
			c = c * 2;
		}
	}
}

