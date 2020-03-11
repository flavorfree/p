#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"

ListNode* ListCreate()//创造头结点
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->next = head;
	head->prev = head;

	return head;
}

void ListPrint(ListNode* phead)//打印
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");

}

void ListPushBack(ListNode* phead, LTDataType x)//尾插
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;

	ListNode* tail = phead->prev;
	tail->next = newnode;
	phead->prev = newnode;
	newnode->next = phead;
	newnode->prev = tail;
}

void ListPopBack(ListNode* phead)//尾删
{
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
}

void ListPushFront(ListNode* phead, LTDataType x)// 头插
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;

	ListNode* next = phead->next;
	phead->next = newnode;
	next->prev = newnode;
	newnode->next = next;
	newnode->prev = phead;
}

void ListPopFront(ListNode* phead)// 头删
{
	assert(phead->next != NULL);//判断不能把头结点给删了

	ListNode* cur = phead->next;
	ListNode* next = cur->next;

	phead->next = next;
	next->prev = phead;
	free(cur);
}

void ListDestory(ListNode* phead)// 双向链表销毁
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		ListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(phead);
	phead = NULL;
}

ListNode* ListFind(ListNode* plist, LTDataType x)// 查找
{
	ListNode* cur = plist->next;
	while (cur != plist)
	{
		if (cur->data != x)
		{
			cur = cur->next;
		}
		else
		{
			return cur;
		}
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)// 双向链表在pos的前面进行插入
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->data = x;

	ListNode* prev = pos->prev;

	prev->next = newnode;
	pos->prev = newnode;
	newnode->next = pos;
	newnode->prev = prev;

}

void ListErase(ListNode* pos)// 双向链表删除pos位置的节点
{
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
}