#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"

void adjustDown(Heap*hp, int m)//���µ����㷨
{
	int cur = m;
	int n;

	while (cur * 2 + 1 < hp->size)//�ж��Ƿ�������
	{
		if (cur * 2 + 2 >= hp->size)//���û���Һ��ӵ����
		{
			n = cur * 2 + 1;
		}
		else
		{
			if (hp->data[cur * 2 + 1] > hp->data[cur * 2 + 2])//���Һ����ˣ��Ƚ����Һ��Ӵ�С
			{
				n = cur * 2 + 1;
			}
			else
			{
				n = cur * 2 + 2;
			}
		}
		if(hp->data[cur] < hp->data[n])//���׺ͽϴ�ĺ��ӽ��бȽ�
		{
			int tmp = hp->data[cur];
			hp->data[cur] = hp->data[n];//ֵ�Ļ���
			hp->data[n] = tmp;

			cur = n;//�±�Ļ���
		}
		else//���ױȺ��Ӷ��������
		{
			break;
		}
	}

}


void HeapInit(Heap* hp, HPDataType* a, int n)//�ѵĽ���
{
	hp->capacity = n * 2;
	hp->size = n;
	hp->data = (HPDataType *)calloc(hp->capacity, sizeof(HPDataType));//����ռ�

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

