#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

void AdjustDown(HPDataType* a,size_t n, int root)//向下调整算法
{
	int parent = root;
	int child = parent * 2 + 1;//父亲的左孩子
	while (child < n)
	{
		if (child+1 < n && a[child] > a[child + 1])//找出较小的孩子
		{
			child++;
		}
		if (a[parent] > a[child])//孩子比父亲小则交换，继续往下调
		{
			HPDataType tmp = a[parent];
			a[parent] = a[child];
			a[child] = tmp;

			parent = child;
			child = parent * 2 + 1;
		}
		else//孩子比父亲大
		{
			break;
		}
	}
}

void AdjustUp(HPDataType* a, int child)//向上调整算法
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] > a[child])
		{
			HPDataType tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;

			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}

void HeapCreate(Heap*hp, HPDataType* a, int n)// 堆的构建
{
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType)*n); 
	memcpy(hp->_a, a, sizeof(HPDataType)*n);
	hp->_size = n;
	hp->_capacity = n;

	//建堆(小堆)
	//倒着走，从下面的树开始往上调，找倒数一个非叶子节点所在树，开始调
	//一直调到根，堆就建成；
	int root =(n-1-1)/2;
	for (root; root >= 0; --root)
	{
		AdjustDown(hp->_a, hp->_size,root );
	}

}

void HeapPrint(Heap* hp)//堆的打印
{
	for (int i = 0; i < hp->_size; i++)
	{
		printf("%d ", hp->_a[i]);
	}
	printf("\n");
}

//void HeapDestory(Heap* hp)// 堆的销毁

void HeapPush(Heap* hp, HPDataType x)//堆的插入
{
	//空间不够进行增容
	if (hp->_size == hp->_capacity)
	{
		size_t newcapacity = hp->_capacity * 2;
		hp->_a = (Heap*)realloc(hp->_a, sizeof(HPDataType)*newcapacity);
		hp->_capacity = newcapacity;
	}
	hp->_a[hp->_size] = x;
	hp->_size++;
	
	AdjustUp(hp->_a,hp->_size-1);//向上调整算法
}

void HeapPop(Heap* hp)// 堆的删除
{
	HPDataType tmp = hp->_a[0];
	hp->_a[0] = hp->_a[hp->_size - 1];
	hp->_a[hp->_size - 1] = tmp;

	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);
}

HPDataType HeapTop(Heap* hp)// 取堆顶的数据
{
	return hp->_a[0];
}

int HeapEmpty(Heap* hp)// 堆的判空
{
	return hp->_size == 0 ? 1 : 0;
}

//升序建大堆
//降序建小堆
void HeapSort(int* a,int n)// 对数组进行堆排序/选择排序 (降序)
{
	//建堆（小堆）
	int root = (n - 1 - 1) / 2;
	for (root; root >= 0; --root)
	{
		AdjustDown(a, n, root);
	}

	int end = n - 1;
	while (end > 0)
	{
		int tmp = a[0];
		a[0] = a[end];
		a[end] = tmp;

		AdjustDown(a, end, 0);
		end--;
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void PrintTopK(int* a, int n, int k)//TopK
{
	//k个数的小堆
	Heap hp;
	HeapCreate(&hp, a, k);

	for (int i = k; i < n; i++)
	{
		//与堆顶数据进行比较
		if (HeapTop(&hp) < a[i])
		{
			HeapPop(&hp);
			HeapPush(&hp, a[i]);
		}
	}
	HeapPrint(&hp);
}

void TopK()
{
	int n = 10000;
	int* a = (int*)malloc(sizeof(int)*n);
	srand(time(0));
	for (size_t i = 0; i < n; i++)
	{
		a[i] = rand() % 100000;
	}
	a[5] = 1000000 + 1;
	a[24] = 1000000 + 2;
	a[332] = 1000000 + 3;
	a[532] = 1000000 + 4;
	a[765] = 1000000 + 5;
	a[1314] = 1000000 + 6;
	a[1578] = 1000000 + 7;
	a[3580] = 1000000 + 8;
	a[2245] = 1000000 + 9;
	a[2240] = 1000000 + 10;
	PrintTopK(a, n, 10);
}