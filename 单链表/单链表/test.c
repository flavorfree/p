#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

int main()
{
	SListNode* pList = NULL;//链表初始化
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);//因为要改变链表，所以要将链表地址传过去，才能在链表上改变
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);
	SListPrint(pList);

	/*SListPushFront(&pList, 0);
	SListPrint(pList);*/

	SListPopBack(&pList);
	SListPrint(pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPopBack(&pList);
	//SListPrint(pList);
	//SListPopBack(&pList);
	//SListPrint(pList);
	//SListPopBack(&pList);
	//SListPrint(pList);

	/*SListPopFront(&pList);
	SListPrint(pList);*/
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);
	//SListPopFront(&pList);
	//SListPrint(pList);

	//SListNode* ret = SListFind(pList, 2);
	//SListInserAfter(ret, 66);
	//SListPrint(pList);

	//SListNode* ret1 = SListFind(pList, 2);
	//SListEraseAfter(ret1);
	//SListPrint(pList);
	
	/*SListDestory(&pList);
	SListPrint(pList);*/

	system("pause");
	return 0;
}