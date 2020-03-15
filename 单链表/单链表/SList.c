#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

void SListPrint(SListNode* plist)//��ӡ����
{
	SListNode* cur = plist;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}

SListNode* CreatListNode(SLTDataType x)//����һ���µĽڵ�,���ص�������һ���ṹ��
{
	SListNode* newNode = (SListNode*)malloc(sizeof(SListNode));
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}

void SListPushBack(SListNode** ppList, SLTDataType x)//β��
{
	SListNode* newNode = CreatListNode(x);
	
	if (*ppList == NULL)//����������
	{
		*ppList = newNode;
	}
	else
	{
		SListNode* cur = *ppList;
		while (cur->next != NULL)//��β��
		{
			cur = cur->next;
		}
		cur->next = newNode;
	}
}

void SListPushFront(SListNode** ppList, SLTDataType x)//ͷ��
{
	SListNode* newNode = CreatListNode(x);
	newNode->next = *ppList;
	 *ppList = newNode;
}

void SListPopBack(SListNode** ppList)//βɾ
{
	//Ҫ�����������
	//1.����Ϊ��
	//2.����ֻ��һ���ڵ�
	//3.�����ж���ڵ�
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
		while (cur->next != NULL)//��β��
		{
			prev = cur;
			cur = cur->next;
		}
		free(cur);
		 
		prev->next = NULL;
	}
}

void SListPopFront(SListNode** ppList)//ͷɾ
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

SListNode* SListFind(SListNode* pList, SLTDataType x)//�ڵ������в��ң��Ƿ���x
{
	SListNode* cur = pList;
	while (cur != NULL)
	{
		/*if (cur->data == x)
		{
			printf("�ҵ��ˣ�\n");
		}
		else if (cur->next == NULL && cur->data != x)
		{
			printf("û�У�\n");
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

void SListInserAfter(SListNode* pos, SLTDataType x)//�ڵ�����posλ��֮�����x
{
	//SListNode* newnode = CreatListNode(x);
	//SListNode* next = pos->next;
	//pos->next = newnode;
	//newnode->next = next;

	SListNode* newnode = CreatListNode(x);
	newnode->next = pos->next;
	pos->next = newnode;
}

void SListEraseAfter(SListNode* pos)//ɾ���ڵ�����posλ��֮���ֵ
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