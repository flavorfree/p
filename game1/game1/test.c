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
	InitBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board, ROW, COL);//打印棋盘
	while (1)
	{
		
		PlayerMove(board, ROW, COL);//玩家落子
		DisplayBoard(board, ROW, COL);
		p = Judge(board, ROW, COL);//判断棋盘情况
		if (p != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑落子
		DisplayBoard(board, ROW, COL);
		p = Judge(board, ROW, COL);//判断棋盘情况
		if (p != 'C')
		{
			break;
		}
	}
	if (p == '*')
	{
		printf("玩家赢！\n");
	}
	if (p == '#')
	{
		printf("电脑赢！\n");
	}
	if (p == 'Q')
	{
		printf("平局！\n");
	}
}

int main()
{
	int input = 1;
	srand((unsigned int)time(NULL));
	while (input)
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 2:
			printf("游戏结束！\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	}
	system("pause");
	return 0;
}