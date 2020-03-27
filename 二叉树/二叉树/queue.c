#define _CRT_SECURE_NO_WARNINGS 1

#include"queue.h"

void QueueInit(Queue* q)// 初始化队列
{
	assert(q);
	q->_first = NULL;
	q->_end = NULL;
}

void QueuePush(Queue* q, QDataType data)// 队尾入队列
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

void QueuePop(Queue* q)// 队头出队列
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

QDataType QueueFront(Queue* q)// 获取队列头部元素
{
	assert(q);
	return q->_first->_data;
}

QDataType QueueBack(Queue* q)// 获取队列队尾元素
{
	assert(q);
	return q->_end->_data;
}

int QueueSize(Queue* q)// 获取队列中有效元素个数
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

int QueueEmpty(Queue* q)// 检测队列是否为空，如果为空返回非零结果，如果非空返回0
{
	assert(q);
	return q->_first == NULL ? 1 : 0;
}

void QueueDestroy(Queue* q)// 销毁队列
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