#define _CRT_SECURE_NO_WARNINGS 1

#include "Heap.h"


int main()
{
	int data[10] = { 2, 3, 5, 6, 8, 1, 12, 9, 15, 18 };
	Heap hp;

	HeapInit(&hp, data, 10);

	HeapPrint(&hp);

	HeapDestory(&hp);



	system("pause");
	return 0;
}