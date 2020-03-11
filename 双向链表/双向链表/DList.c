#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"

ListNode* ListCreate()//����ͷ���
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->next = head;
	head->prev = head;

	return head;
}

void ListPrint(ListNode* phead)//��ӡ
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");

}

void ListPushBack(ListNode* phead, LTDataType x)//β��
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

void ListPopBack(ListNode* phead)//βɾ
{
	ListNode* tail = phead->prev;
	ListNode* tailprev = tail->prev;
	tailprev->next = phead;
	phead->prev = tailprev;
	free(tail);
}

void ListPushFront(ListNode* phead, LTDataType x)// ͷ��
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

void ListPopFront(ListNode* phead)// ͷɾ
{
	assert(phead->next != NULL);//�жϲ��ܰ�ͷ����ɾ��

	ListNode* cur = phead->next;
	ListNode* next = cur->next;

	phead->next = next;
	next->prev = phead;
	free(cur);
}

void ListDestory(ListNode* phead)// ˫����������
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

ListNode* ListFind(ListNode* plist, LTDataType x)// ����
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

void ListInsert(ListNode* pos, LTDataType x)// ˫��������pos��ǰ����в���
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

void ListErase(ListNode* pos)// ˫������ɾ��posλ�õĽڵ�
{
	ListNode* prev = pos->prev;
	ListNode* next = pos->next;

	prev->next = next;
	next->prev = prev;
	free(pos);
}