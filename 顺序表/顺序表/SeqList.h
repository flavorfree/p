#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;

typedef struct
{
	SLDataType* a;
	size_t size;
	size_t capacity;

}SeqList;

void SeqListInit(SeqList* ps);//初始化
void SeqListDestory(SeqList* ps);//清理空间

void CheckCapacity(SeqList* ps);//扩容

void SeqListPrint(SeqList* ps);//打印顺序表

void SeqListPushBack(SeqList* ps, SLDataType x);//尾插
void SeqListPopBack(SeqList* ps);//尾删
void SeqListPushFront(SeqList* ps, SLDataType x);//头插
void SeqListPopFront(SeqList* ps);//头删

int SeqListFind(SeqList* ps, SLDataType x);//顺序表查找某个数

int SeqListInsert(SeqList* ps, size_t pos, SLDataType x);//顺序表在pos位置插入x

int SeqListErase(SeqList* ps, size_t pos);//删除顺序表pos位置上的数