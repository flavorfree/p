#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define isSmallLetter(ch) ((ch) <= 'z' && (ch) >= 'a')//宏，不属于编译，属于预编译，编译前的准备工作

int isBigLetter(char ch)//inline内联函数，编译时不再视为函数，而把它当为代码值，直接插入
{
	return ch <= 'Z' && ch >= 'A';
}


int main2()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (isSmallLetter(ch))//宏
		{
			putchar(ch - ('a' - 'A'));
		}
		else if (isBigLetter(ch))
		{
			putchar(ch + ('a' - 'A'));
		}
		else
		{
			putchar(ch);
		}
	}

	system("pause");
	return 0;
}