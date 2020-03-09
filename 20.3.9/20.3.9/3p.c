#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char* mystring()
{
	char buffer[6] = { 0 };
	char* s = "hello world";
	for (int i = 0; i < 5; ++i)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}

int main3()
{
	char* str[3] = { "stra", "atrb", "strc" };
	char* p = str[0];
	int i = 0;
	while (i < 3)
	{
		printf("%s\n ", p++);
		i++;
	}

	printf("%s \n", mystring());
	system("pause");
	return 0;
	
}