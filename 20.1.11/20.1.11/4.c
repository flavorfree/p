#define _CRT_SECURE_NO_WARNINGS 1

//�������룬��½���Σ����������˳�

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int i = 0;
	char password[20] = { 0 };

	for (i = 0; i < 3; i++)
	{
		printf("���������룻>");
		scanf("%s", &password);
		if (strcmp(password, "123456") == 0)//string compar�ַ����Ƚ�
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("��������������룡\n");
		}
	}
	if (i == 3)
		printf("�������붼���˳�����!\n");

	system("pause");
	return 0;
}