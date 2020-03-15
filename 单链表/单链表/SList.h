#define _CRT_SECURE_NO_WARNINGS 1

#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;//�����洢����
	struct SListNode* next;//ָ��ָ����һ�����
}SListNode;

void SListPrint(SListNode* pList);//��ӡ����

SListNode* CreatListNode(SLTDataType x);

void SListPushBack(SListNode** ppList, SLTDataType x);//β��
void SListPushFront(SListNode** ppList, SLTDataType x);//ͷ��
void SListPopBack(SListNode** ppList);//βɾ
void SListPopFront(SListNode** ppList);//ͷɾ

SListNode* SListFind(SListNode* pList, SLTDataType x);//�ڵ������в��ң��Ƿ���x

void SListInserAfter(SListNode* pos, SLTDataType x);//�ڵ�����posλ��֮�����x
//˼��Ϊʲô����posλ��֮ǰ����

void SListEraseAfter(SListNode* pos);//ɾ���ڵ�����posλ��֮���ֵ
//˼��Ϊʲô��ɾ��posλ��

void SListDestory(SListNode** ppList);//��������