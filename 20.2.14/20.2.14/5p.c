#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

////unsigned char i = 0;

int main()
{
	char* p = "hello";
	printf("%s\n", p);//hello
	printf("%c\n", *p);//h

	/*for (i = 0; i <= 255; i++)
	{
		printf("hello word\n");
	}
	return 0;*/
	system("pause");
	return 0;
}