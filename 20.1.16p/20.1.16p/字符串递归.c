#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int strlen(char * str)
{
	if (*str == '\0')
		return 0;
	else
		return 1 + strlen(str + 1);
}

int main()
{
	char *p = "absdef";
	int len = strlen(p);
	printf("%d\n", len);
	system("pause");
	return 0;
}