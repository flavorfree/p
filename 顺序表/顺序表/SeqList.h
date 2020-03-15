#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;//�洢��Ԫ����

typedef struct SeqList
{
	SLDataType* a;//�洢�ռ����ַ�������������׵�ַ
	size_t size;//˳�����
	size_t capacity;//��ǰ����Ĵ洢����
}SeqList;

void SeqListInit(SeqList* ps);//��ʼ��
void SeqListDestory(SeqList* ps);//����ռ�

void CheckCapacity(SeqList* ps);//����

void SeqListPrint(SeqList* ps);//��ӡ˳���

void SeqListPushBack(SeqList* ps, SLDataType x);//β��
void SeqListPopBack(SeqList* ps);//βɾ
void SeqListPushFront(SeqList* ps, SLDataType x);//ͷ��
void SeqListPopFront(SeqList* ps);//ͷɾ

int SeqListFind(SeqList* ps, SLDataType x);//˳������ĳ����

int SeqListInsert(SeqList* ps, size_t pos, SLDataType x);//˳�����posλ�ò���x

int SeqListErase(SeqList* ps, size_t pos);//ɾ��˳���posλ���ϵ���