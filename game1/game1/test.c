#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void menu()
{
	printf("*******************************\n");
	printf("********    1. play     *******\n");
	printf("********    2. exit     *******\n");
	printf("*******************************\n");
}

void InitBoard(char board[ROW][COL], int row, int col)//��ʼ������
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			board[x][y] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			printf(" %c ", board[x][y]);
			if (y < col - 1)
				printf(" | ");
		}
		printf("\n");
		//if (x < row - 1)
		{
			for (y = 0; y < col; y++)
			{
				if (x < row - 1)
				{
					printf("---");
					if (y < col - 1)
						printf(" | ");
				}
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;

	printf("��������ӣ�>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if ((x <= row) && (x >= 1) && (y >= 1) && (y <= col))
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("��λ���ѱ�ռ�ã�����������:>");
			}
			else
			{

				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("����������������룺>");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������:>\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int IsFull(char board[ROW][COL], int row, int col)//�ж������Ƿ�����
{
	for (int x = 0; x < row; x++)
	{
		for (int y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
				return 0;
		}
	}
	return 1;//����
}

char Judge(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)//���ж�
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][1] != ' ')
		{
			return board[x][1];
		}
	}
	for (y = 0; y < col; y++)//���ж�
	{
		if (board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[1][y] != ' ')
		{
			return board[1][y];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//�Խ����ж�
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//�Խ����ж�
	{
		return board[1][1];
	}

	if (IsFull(board, ROW, COL) == 1)//�ж��Ƿ�����
	{
		return 'Q';//ƽ�֣�����������û��˭Ӯ��
	}
	return 'C';//����
}
//���Ӯ - ��*��
//����Ӯ - ��#��
//ƽ�� - ��Q��
//���� - ��C��

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