#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main2()
{
	char a = -128;
	printf("%u\n", a);//4294967168

	char b = 128;
	printf("%u\n", b);//4294967168

	//%u �޷���ʮ������������char����������int����
	//�������Ϳ�a/b���������ͣ���Ϊ�з�������ǰȫ��1��
	system("pause");
	return 0;
}