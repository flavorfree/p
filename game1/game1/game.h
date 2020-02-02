#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

void InitBoard(char board[ROW][COL],int row,int col);

void DisplayBoard(char board[ROW][COL], int row, int col);


void PlayerMove(char board[ROW][COL], int row, int col);//玩家棋子 - '*'

void ComputerMove(char board[ROW][COL], int row, int col);//电脑棋子 - ‘#’

char Judge(char board[ROW][COL], int row, int col);
//玩家赢 - ‘*’
//电脑赢 - ‘#’
//平局 - ‘Q’
//继续 - ‘C’