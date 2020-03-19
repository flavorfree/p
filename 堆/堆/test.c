#define _CRT_SECURE_NO_WARNINGS 1

#include"Heap.h"

int main()
{
	int a[10] = {27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	Heap hp;
	HeapCreate(&hp ,a, 10);
	HeapPrint(&hp);

	HeapPush(&hp, 80);
	HeapPrint(&hp);
	HeapPush(&hp, 0);
	HeapPrint(&hp);

	HeapPop(&hp);
	HeapPrint(&hp);

	while (!HeapEmpty(&hp))
	{
		printf("%d ", HeapTop(&hp));
		HeapPop(&hp);
	}
	printf("\n");

	HeapSort(a, 10);

	TopK();

	system("pause");
	return 0;
}