#define _CRT_SECURE_NO_WARNINGS 1

#include"SList.h"

int main()
{
	SListNode* pList = NULL;//�����ʼ��
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);//��ΪҪ�ı���������Ҫ�������ַ����ȥ�������������ϸı�
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