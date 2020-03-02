#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void SeqListTest()
{
	SeqList s;
	SeqListInit(&s);

	SeqListPushBack(&s, 0);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	SeqListPrint(&s);

	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPrint(&s);

	SeqListInsert(&s, 2, 9);
	SeqListPrint(&s);

	SeqListErase(&s, 3);
	SeqListPrint(&s);

	SeqListDestory(&s);
}

int main()
{
	
	SeqListTest();
	system("pause");
	return 0;
}