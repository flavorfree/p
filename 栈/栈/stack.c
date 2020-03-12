#define _CRT_SECURE_NO_WARNINGS 1

#include"stack.h"

void StackInit(Stack* ps)//��ʼ��ջ
{
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(Stack* ps, STDataType data)// ��ջ
{
	if (ps->top == ps->capacity)//�ж����޶���ռ�
	{
		size_t newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		ps->a = (STDataType*)realloc(ps->a, newcapacity*sizeof(STDataType));
		ps->capacity = newcapacity;
	}

	ps->a[ps->top] = data;
	ps->top++;
}

void StackPop(Stack* ps)// ��ջ
{
	assert(ps && ps->top>0);

	--ps->top;
}

STDataType StackTop(Stack* ps)// ��ȡջ��Ԫ��
{
	assert(ps);

	return ps->a[ps->top-1];
}

int StackSize(Stack* ps)// ��ȡջ����ЧԪ�ظ���
{
	assert(ps);

	return ps->top;
}

int StackEmpty(Stack* ps)// ���ջ�Ƿ�Ϊ�գ����Ϊ�շ��ط������������Ϊ�շ���0
{
	assert(ps);

	return ps->top == 0 ? 1 : 0;
}

void StackDestroy(Stack* ps)// ����ջ
{
	assert(ps);

	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->top = 0;
}