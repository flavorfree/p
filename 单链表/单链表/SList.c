#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void SListPrint(SListNode* plist)//打印链表
{
	SListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* CreatListNode(SLTDataType x)//创造一个新的节点,返回的类型是一个结构体
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

void SListPushBack(SListNode** ppList, SLTDataType x)//尾插
{
	SListNode* newNode = CreatListNode(x);
	
	if (*ppList == NULL)//空链表的情况
	{
		*ppList = newNode;
	}
	else
	{
		SListNode* cur = *ppList;
		while (cur->next != NULL)//找尾部
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}

void SListPushFront(SListNode** ppList, SLTDataType x)//头插
{
	SListNode* newNode = CreatListNode(x);
	newNode->next = *ppList;
	 *ppList = newNode;
}

void SListPopBack(SListNode** ppList)//尾删
{
	//要考虑三种情况
	//1.链表为空
	//2.链表只有一个节点
	//3.链表有多个节点
	if (*ppList == NULL)
	{
		return;
	}
	else if ((*ppList)->next == NULL)
	{
		free(*ppList);
		*ppList = NULL;
	}
	else
	{
		SListNode* cur = *ppList;
		SListNode* prev = NULL;
		while (cur->next != NULL)//找尾部
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		 
		prev->next = NULL;
	}
}

void SListPopFront(SListNode** ppList)//头删
{
	if (*ppList == NULL)
	{             
		return;
	}
	//else if ((*ppList)->next == NULL)
	//{
	//	free(*ppList);
	//	*ppList = NULL;
	//}
	else
	{
		SListNode* next = (*ppList)->next;
		free(*ppList);
		*ppList = next;
	}
}

SListNode* SListFind(SListNode* pList, SLTDataType x)//在单链表中查找，是否含有x
{
	SListNode* cur = pList;
	while (cur != NULL)
	{
		/*if (cur->data == x)
		{
			printf("找到了！\n");
		}
		else if (cur->next == NULL && cur->data != x)
		{
			printf("没有！\n");
		}
			cur = cur->next;	*/
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}

void SListInserAfter(SListNode* pos, SLTDataType x)//在单链表pos位置之后插入x
{
	//SListNode* newnode = CreatListNode(x);
	//SListNode* next = pos->next;
	//pos->next = newnode;
	//newnode->next = next;

	SListNode* newnode = CreatListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListEraseAfter(SListNode* pos)//删除在单链表pos位置之后的值
{
	SListNode* next = pos->next;
	if (next != NULL)
	{
		pos->next = next->next;
		free(next);
	}
}

void SListDestory(SListNode** ppList)
{
	SListNode* cur = *ppList;
	while (cur)
	{
		SListNode* next = cur->next;
		free(cur);
		cur = next;
	}
	*ppList = NULL;
}