#define _CRT_SECURE_NO_WARNINGS 1

#include"DList.h"

int main()
{
	ListNode* List = ListCreate();
	ListPushBack(List, 1);
	ListPushBack(List, 2);
	ListPushBack(List, 3);
	ListPushBack(List, 4);
	ListPrint(List);

	ListPopBack(List);
	ListPrint(List);

	ListPushFront(List, 0);
	ListPushFront(List, -1);
	ListPrint(List);

	ListPopFront(List);
	ListPrint(List);

	ListFind(List,2);
	ListInsert(ListFind(List, 2), 8);
	ListPrint(List);

	ListErase(ListFind(List, 2));
	ListPrint(List);

	ListDestory(List);

	system("pause");
	return 0;
}