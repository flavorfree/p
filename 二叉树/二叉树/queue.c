#define _CRT_SECURE_NO_WARNINGS 1

#include"queue.h"

void QueueInit(Queue* q)// ��ʼ������
{
	assert(q);
	q->_first = NULL;
	q->_end = NULL;
}

void QueuePush(Queue* q, QDataType data)// ��β�����
{
	assert(q);
	QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
	newnode->_data = data;
	newnode->_next = NULL;

	if (q->_end == NULL)
	{
		q->_first = q->_end = newnode; 
	}
	else
	{
		q->_end->_next= newnode;
		q->_end = newnode;
	}
}

void QueuePop(Queue* q)// ��ͷ������
{
	assert(q);

	if (q->_first->_next == NULL)
	{
		
		q->_first =NULL;
		q->_end = NULL;
	}
	else
	{
		QueueNode* next = q->_first->_next;
		free(q->_first);
		q->_first = next;
	}
}

QDataType QueueFront(Queue* q)// ��ȡ����ͷ��Ԫ��
{
	assert(q);
	return q->_first->_data;
}

QDataType QueueBack(Queue* q)// ��ȡ���ж�βԪ��
{
	assert(q);
	return q->_end->_data;
}

int QueueSize(Queue* q)// ��ȡ��������ЧԪ�ظ���
{
	assert(q);
	int n = 0;
	QueueNode* cur = q->_first;
	while (cur)
	{
		cur = cur->_next;
		n++;
	}
	printf("%d ", n);
}

int QueueEmpty(Queue* q)// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0
{
	assert(q);
	return q->_first == NULL ? 1 : 0;
}

void QueueDestroy(Queue* q)// ���ٶ���
{
	assert(q);
	QueueNode* cur = q->_first;
	
	while (cur)
	{
		QueueNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	q->_first = q->_end = NULL;
}