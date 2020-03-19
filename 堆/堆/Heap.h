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

void AdjustDown(HPDataType* a, size_t n, int root);////向下调整算法

void AdjustUp(HPDataType* a, int child);//向上调整算法

void HeapCreate(Heap*hp, HPDataType* a, int n);// 堆的构建

void HeapDestory(Heap* hp);// 堆的销毁

void HeapPrint(Heap* hp);//堆的打印

void HeapPush(Heap* hp, HPDataType x);// 堆的插入

void HeapPop(Heap* hp);// 堆的删除

HPDataType HeapTop(Heap* hp);// 取堆顶的数据

int HeapEmpty(Heap* hp);// 堆的判空

void HeapSort(int* a, int n);// 对数组进行堆排序

void PrintTopK(int* a, int n, int k);
void TopK();//TopK问题