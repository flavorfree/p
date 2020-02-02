#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*******************************\n");
	printf("********    1. play     *******\n");
	printf("********    2. exit     *******\n");
	printf("*******************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };
	char p = 0;
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board, ROW, COL);//��ӡ����
	while (1)
	{
		
		PlayerMove(board, ROW, COL);//�������
		DisplayBoard(board, ROW, COL);
		p = Judge(board, ROW, COL);//�ж��������
		if (p != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		DisplayBoard(board, ROW, COL);
		p = Judge(board, ROW, COL);//�ж��������
		if (p != 'C')
		{
			break;
		}
	}
	if (p == '*')
	{
		printf("���Ӯ��\n");
	}
	if (p == '#')
	{
		printf("����Ӯ��\n");
	}
	if (p == 'Q')
	{
		printf("ƽ�֣�\n");
	}
}

int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	while (input)
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 2:
			printf("��Ϸ������\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	}
	system("pause");
	return 0;
}