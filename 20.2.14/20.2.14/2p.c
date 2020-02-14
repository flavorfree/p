#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	char a = -128;
	printf("%u\n", a);//4294967168

	char b = 128;
	printf("%u\n", b);//4294967168

	//%u 无符号十进制整数，将char类型提升到int类型
	//提升类型看a/b的数据类型，若为有符号类型前全补1；
	system("pause");
	return 0;
}