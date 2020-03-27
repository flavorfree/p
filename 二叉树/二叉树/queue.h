#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h> 

typedef struct BinaryTreeNode* QDataType;

typedef struct QueueNode
{
	QDataType _data;
	struct QueueNode* _next;
}QueueNode;

typedef struct Queue
{
	struct QueueNode* _first;//��ͷ
	struct QueueNode* _end;//��β
}Queue;

void QueueInit(Queue* q);// ��ʼ������

void QueuePush(Queue* q, QDataType data);// ��β�����

void QueuePop(Queue* q);// ��ͷ������

 QDataType QueueFront(Queue* q);// ��ȡ����ͷ��Ԫ��

QDataType QueueBack(Queue* q);// ��ȡ���ж�βԪ��

int QueueSize(Queue* q);// ��ȡ��������ЧԪ�ظ���

int QueueEmpty(Queue* q);// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0

void QueueDestroy(Queue* q);// ���ٶ���