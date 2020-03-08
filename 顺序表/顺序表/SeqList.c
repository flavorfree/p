#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"
#include<assert.h>

void SeqListInit(SeqList* ps)//˳����ʼ��
{
	assert(ps);

	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListDestory(SeqList* ps)//����˳���
{
	assert(ps);
	free(ps->a);//�ͷŴ洢�ռ�
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void CheckCapacity(SeqList* ps)//����
{
	assert(ps);
	
	if (ps->size == ps->capacity)//�ж��Ƿ���Ҫ����
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//����ǰ�ռ�Ϊ�գ������4���ռ䣬��������Ŀռ�����һ��
		ps->a = (SLDataType*)realloc(ps->a, newcapacity*sizeof(SLDataType));

		ps->capacity = newcapacity;
	}
}

void SeqListPrint(SeqList* ps)//��ӡ˳���
{
	assert(ps);

	for (size_t i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

void SeqListPushBack(SeqList* ps, SLDataType x)//β��
{
	assert(ps);

	CheckCapacity(ps);

	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPopBack(SeqList* ps)//βɾ
{
	assert(ps);

	ps->size--;
}

void SeqListPushFront(SeqList* ps, SLDataType x)//ͷ��
{
	assert(ps);

	CheckCapacity(ps);

	size_t end = ps->size;
	while (end)//��˳����е����ݶ������ƶ�һ�������˵�һ��λ��
	{
		ps->a[end] = ps->a[end - 1];
		end--;
	}

	ps->a[0] = x;
	ps->size++;
}

void SeqListPopFront(SeqList* ps)//ͷɾ
{
	assert(ps);

	size_t start = 0;
	while (start < ps->size-1)//ֱ��˳���������ǰ�ƶ�һ��������ǰһ������
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}

	ps->size--;
}

int SeqListFind(SeqList* ps, SLDataType x)//˳������ĳ����
{
	assert(ps);

	for (size_t i = 0; i < ps->size; i++)//�ӵ�һ��λ�ÿ�ʼ�������Ѱ��
	{
		if (ps->a[i] == x)
		{
			return 1;//�ҵ���
		}
	}
	return -1;//û�ҵ�
}

int SeqListInsert(SeqList* ps, size_t pos, SLDataType x)//˳�����posλ�ò���x
{
	assert(ps);
	assert(pos < ps->size);//�������posλ���Ƿ����

	CheckCapacity(ps);

	size_t end = ps->size;
	while (end > pos)//��pos�Լ��������������ƶ�����posλ�ÿճ�
	{
		ps->a[end] = ps->a[end-1];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}

int SeqListErase(SeqList* ps, size_t pos)//ɾ��˳���posλ���ϵ���
{
	assert(ps);
	assert(pos < ps->size);

	while (pos < ps->size-1)//ֱ�Ӵ�pos��һ��λ�ÿ�ʼ����ǰ�ƶ�һ�񣬸���סǰһ��
	{
		ps->a[pos] = ps->a[pos + 1];
		pos++;
	}
	ps->size--;
}