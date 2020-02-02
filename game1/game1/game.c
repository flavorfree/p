#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)//初始化棋盘
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

void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
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

	printf("玩家请落子：>");
	while (1)
	{
		scanf("%d %d", &x, &y);
		if ((x <= row) && (x >= 1) && (y >= 1) && (y <= col))
		{
			if (board[x-1][y-1] != ' ')
			{
				printf("该位置已被占用，请重新输入:>");
			}
			else
			{
				
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入：>");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑落子:>\n");
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

int IsFull(char board[ROW][COL], int row, int col)//判断棋盘是否已满
{
	for (int x = 0; x < row; x++)
	{
		for (int y = 0; y < col; y++)
		{
			if (board[x][y] == ' ')
				return 0;
		}
	}
	return 1;//满了
}

char Judge(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	for (x = 0; x < row; x++)//行判断
	{
		if (board[x][0] == board[x][1] && board[x][1] == board[x][2] && board[x][1] != ' ')
		{
			return board[x][1];
		}
	}
	for (y = 0; y < col; y++)//列判断
	{
		if (board[0][y] == board[1][y] && board[1][y] == board[2][y] && board[1][y] != ' ')
		{
			return board[1][y];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')//对角线判断
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')//对角线判断
	{
		return board[1][1];
	}

	if (IsFull(board,ROW,COL) == 1)//判断是否满了
	{
		return 'Q';//平局，棋盘满了且没有谁赢出
	}
	return 'C';//继续
}