#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

int main()
{
	Stack s;
	StackInit(&s);//传地址进去，不然无法改变；

	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);

	while (!StackEmpty(&s))
	{
		printf("%d ", StackTop(&s));
		StackPop(&s);
	}

	StackDestroy(&s);

	system("pause");
	return 0;
}