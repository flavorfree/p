#define _CRT_SECURE_NO_WARNINGS 1


//�жϻ���Ϊ����ֽ�����С���ֽ���

#include<stdio.h>
#include<stdlib.h>

int main1()
{
	int n = 1;
	char a = (char)n;
	//С��  01 00 00 00
	//���  00 00 00 01

	if (a == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}

	system("pause");
	return 0;
}