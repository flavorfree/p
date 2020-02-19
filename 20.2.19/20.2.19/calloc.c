#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	int* p = calloc(10, sizeof(int));
	if (NULL != p)
	{
		// π”√ø’º‰
	}
	free(p);
	p = NULL;
	system("pause");
	return 0;
}