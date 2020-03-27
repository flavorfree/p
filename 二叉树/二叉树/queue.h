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
	struct QueueNode* _first;//队头
	struct QueueNode* _end;//队尾
}Queue;

void QueueInit(Queue* q);// 初始化队列

void QueuePush(Queue* q, QDataType data);// 队尾入队列

void QueuePop(Queue* q);// 队头出队列

 QDataType QueueFront(Queue* q);// 获取队列头部元素

QDataType QueueBack(Queue* q);// 获取队列队尾元素

int QueueSize(Queue* q);// 获取队列中有效元素个数

int QueueEmpty(Queue* q);// 检测队列是否为空，如果为空返回非零结果，如果非空返回0

void QueueDestroy(Queue* q);// 销毁队列