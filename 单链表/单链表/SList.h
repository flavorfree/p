#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;//用来存储数据
	struct SListNode* next;//指针指向下一个结点
}SListNode;

void SListPrint(SListNode* pList);//打印链表

SListNode* CreatListNode(SLTDataType x);

void SListPushBack(SListNode** ppList, SLTDataType x);//尾插
void SListPushFront(SListNode** ppList, SLTDataType x);//头插
void SListPopBack(SListNode** ppList);//尾删
void SListPopFront(SListNode** ppList);//头删

SListNode* SListFind(SListNode* pList, SLTDataType x);//在单链表中查找，是否含有x

void SListInserAfter(SListNode* pos, SLTDataType x);//在单链表pos位置之后插入x
//思考为什么不在pos位置之前插入

void SListEraseAfter(SListNode* pos);//删除在单链表pos位置之后的值
//思考为什么不删除pos位置

void SListDestory(SListNode** ppList);//销毁链表