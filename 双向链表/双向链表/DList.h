#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;//ǰһ��
	struct ListNode* next;//��һ��
	LTDataType data;
}ListNode;


ListNode* ListCreate();// �������������ͷ���.

void ListDestory(ListNode* phead);// ˫����������

void ListPrint(ListNode* phead);// ˫�������ӡ

void ListPushBack(ListNode* phead, LTDataType x);// ˫������β��
void ListPopBack(ListNode* phead);// ˫������βɾ

void ListPushFront(ListNode* phead, LTDataType x);// ˫������ͷ��
void ListPopFront(ListNode* phead);// ˫������ͷɾ

ListNode* ListFind(ListNode* phead, LTDataType x);// ˫���������

void ListInsert(ListNode* pos, LTDataType x);// ˫��������pos��ǰ����в���

void ListErase(ListNode* pos);// ˫������ɾ��posλ�õĽڵ�