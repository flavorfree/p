#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"
#include<assert.h>

void SeqListInit(SeqList* ps)
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void CheckCapacity(SeqList* ps)//¿©»›
{
	assert(ps);
	
	if (ps->size == ps->capacity)//≈–∂œ «∑Ò–Ë“™¿©»›
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		ps->capacity = newcapacity;
	}
}

void SeqListPrint(SeqList* ps)//¥Ú”°À≥–Ú±Ì
{
	assert(ps);

	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPushBack(SeqList* ps, SLDataType x)//Œ≤≤Â
{
	assert(ps);

	CheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SeqList* ps)//Œ≤…æ
{
	assert(ps);

	ps->size--;
}

void SeqListPushFront(SeqList* ps, SLDataType x)//Õ∑≤Â
{
	assert(ps);

	CheckCapacity(ps);

	size_t end = ps->size;
	while (end)
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}

	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)//Õ∑…æ
{
	assert(ps);

	size_t start = 0;
	while (start < ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}

	ps->size--;
}

int SeqListFind(SeqList* ps, SLDataType x)
{
	assert(ps);

	for (size_t i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return 1;
		}
	}
	return -1;
}

int SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
	assert(ps);
	assert(pos < ps->size);//ºÏ≤È ‰»ÎposŒª÷√ «∑Ò∫œ  

	CheckCapacity(ps);

	size_t end = ps->size;
	while (end > pos)
	{
		ps->a[end] = ps->a[end-1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

int SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(pos < ps->size);

	while (pos < ps->size-1)
	{
		ps->a[pos] = ps->a[pos + 1];
		pos++;
	}
	ps->size--;
}