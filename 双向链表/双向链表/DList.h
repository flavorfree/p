#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;//前一个
	struct ListNode* next;//后一个
	LTDataType data;
}ListNode;


ListNode* ListCreate();// 创建返回链表的头结点.

void ListDestory(ListNode* phead);// 双向链表销毁

void ListPrint(ListNode* phead);// 双向链表打印

void ListPushBack(ListNode* phead, LTDataType x);// 双向链表尾插
void ListPopBack(ListNode* phead);// 双向链表尾删

void ListPushFront(ListNode* phead, LTDataType x);// 双向链表头插
void ListPopFront(ListNode* phead);// 双向链表头删

ListNode* ListFind(ListNode* phead, LTDataType x);// 双向链表查找

void ListInsert(ListNode* pos, LTDataType x);// 双向链表在pos的前面进行插入

void ListErase(ListNode* pos);// 双向链表删除pos位置的节点