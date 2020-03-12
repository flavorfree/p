#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

void StackInit(Stack* ps)//初始化栈
{
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(Stack* ps, STDataType data)// 入栈
{
	if (ps->top == ps->capacity)//判断有无多余空间
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (STDataType*)realloc(ps->a, newcapacity*sizeof(STDataType));
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = data;
	ps->top++;
}

void StackPop(Stack* ps)// 出栈
{
	assert(ps && ps->top>0);

	--ps->top;
}

STDataType StackTop(Stack* ps)// 获取栈顶元素
{
	assert(ps);

	return ps->a[ps->top-1];
}

int StackSize(Stack* ps)// 获取栈中有效元素个数
{
	assert(ps);

	return ps->top;
}

int StackEmpty(Stack* ps)// 检测栈是否为空，如果为空返回非零结果，如果不为空返回0
{
	assert(ps);

	return ps->top == 0 ? 1 : 0;
}

void StackDestroy(Stack* ps)// 销毁栈
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}