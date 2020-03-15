#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;//存储单元类型

typedef struct SeqList
{
	SLDataType* a;//存储空间基地址，类似于数组首地址
	size_t size;//顺序表长度
	size_t capacity;//当前分配的存储容量
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