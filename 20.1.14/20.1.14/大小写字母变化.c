#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define isSmallLetter(ch) ((ch) <= 'z' && (ch) >= 'a')//�꣬�����ڱ��룬����Ԥ���룬����ǰ��׼������

int isBigLetter(char ch)//inline��������������ʱ������Ϊ��������������Ϊ����ֵ��ֱ�Ӳ���
{
	return ch <= 'Z' && ch >= 'A';
}


int main2()
{
	char ch;
	while (1)
	{
		ch = getchar();
		if (isSmallLetter(ch))//��
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