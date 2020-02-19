#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* p = (int*)malloc(100);
	free(p);
	free(p);

	/*int a = 10;
	int* p = &a;
	free(p);*/

	/*int* p = (int*)malloc(100);
	p++;
	free(p);*/
	return 0;
}