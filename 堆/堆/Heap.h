#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef int HPDataType;
typedef struct Heap
{
	HPDataType* _a;
	int _size;
	int _capacity;
}Heap;

void AdjustDown(HPDataType* a, size_t n, int root);////���µ����㷨

void AdjustUp(HPDataType* a, int child);//���ϵ����㷨

void HeapCreate(Heap*hp, HPDataType* a, int n);// �ѵĹ���

void HeapDestory(Heap* hp);// �ѵ�����

void HeapPrint(Heap* hp);//�ѵĴ�ӡ

void HeapPush(Heap* hp, HPDataType x);// �ѵĲ���

void HeapPop(Heap* hp);// �ѵ�ɾ��

HPDataType HeapTop(Heap* hp);// ȡ�Ѷ�������

int HeapEmpty(Heap* hp);// �ѵ��п�

void HeapSort(int* a, int n);// ��������ж�����

void PrintTopK(int* a, int n, int k);
void TopK();//TopK����