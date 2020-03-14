#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>

int main3()
{
	unsigned int a = 0xfffffff7;
	unsigned char i = (unsigned char)a;
	char* b = (char*)&a;
	printf("%08x,%08x", i, *b);
	system("pause");
	return 0;
}