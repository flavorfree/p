#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"
#include<assert.h>

void SeqListInit(SeqList* ps)//顺序表初始化
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SeqList* ps)//销毁顺序表
{
	assert(ps);
	free(ps->a);//释放存储空间
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void CheckCapacity(SeqList* ps)//扩容
{
	assert(ps);
	
	if (ps->size == ps->capacity)//判断是否需要扩容
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//若当前空间为空，则给它4个空间，否则给他的空间扩张一倍
		ps->a = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		ps->capacity = newcapacity;
	}
}

void SeqListPrint(SeqList* ps)//打印顺序表
{
	assert(ps);

	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPushBack(SeqList* ps, SLDataType x)//尾插
{
	assert(ps);

	CheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SeqList* ps)//尾删
{
	assert(ps);

	ps->size--;
}

void SeqListPushFront(SeqList* ps, SLDataType x)//头插
{
	assert(ps);

	CheckCapacity(ps);

	size_t end = ps->size;
	while (end)//将顺序表中的数据都往后移动一格，留出了第一个位置
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}

	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)//头删
{
	assert(ps);

	size_t start = 0;
	while (start < ps->size-1)//直接顺序表数据往前移动一个，覆盖前一个数据
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}

	ps->size--;
}

int SeqListFind(SeqList* ps, SLDataType x)//顺序表查找某个数
{
	assert(ps);

	for (size_t i = 0; i < ps->size; i++)//从第一个位置开始往后遍历寻找
	{
		if (ps->a[i] == x)
		{
			return 1;//找到了
		}
	}
	return -1;//没找到
}

int SeqListInsert(SeqList* ps, size_t pos, SLDataType x)//顺序表在pos位置插入x
{
	assert(ps);
	assert(pos < ps->size);//检查输入pos位置是否合适

	CheckCapacity(ps);

	size_t end = ps->size;
	while (end > pos)//将pos以及后面的数据向后移动，将pos位置空出
	{
		ps->a[end] = ps->a[end-1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

int SeqListErase(SeqList* ps, size_t pos)//删除顺序表pos位置上的数
{
	assert(ps);
	assert(pos < ps->size);

	while (pos < ps->size-1)//直接从pos后一个位置开始，向前移动一格，覆盖住前一个
	{
		ps->a[pos] = ps->a[pos + 1];
		pos++;
	}
	ps->size--;
}