#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define COUNT 10

int menu()
{
	printf("*************************\n");
	printf("******   1.play    ******\n");
	printf("******   0.exit    ******\n");
	printf("*************************\n");
	printf("请选择:>");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char show_map[ROW][COL], char mine_map[ROW][COL])
{
	//1.show_map 全部初始化为 *
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			show_map[i][j] = '*';
		}
	}
	//2.mine_map初始化
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			mine_map[i][j] = '0';
		}
	}
	//3.随机生成10个位置作为地雷
	int mine_count = COUNT;
	while (mine_count > 0)
	{
		//生成随机坐标
		int i = rand() % ROW;
		int j = rand() % COL;
		if (mine_map[i][j] == '1')
		{
			continue;
		}
		mine_map[i][j] = '1';
		--mine_count;
	}
}

void PrintMap(char map[ROW][COL])
{
	//1.先打印第一行（坐标）
	printf("   |");
	for (int j = 0; j < COL; j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	//2.打印一行分隔符
	for (int j = 0; j < COL; j++)
	{
		printf("---");
	}
	printf("\n");
	//3.按照每行来分别打印
	for (int i = 0; i < ROW; i++)
	{
		printf("  %d|", i);
		for (int j = 0; j < COL; j++)
		{
			printf(" %c", map[i][j]);
		}
		printf("\n");
	}
}

void UpdateShowMa(char show_map[ROW][COL], char mine_map[ROW][COL], int i, int j)
{
	//判定当前位置（i，j）,周围8个格子有几个雷
	int count = 0;
	if (i - 1 >= 0 && j - 1 >= 0 && mine_map[i - 1][j - 1] == '1')
	{ 
		count++;
	}
	if (i - 1 >= 0 && mine_map[i - 1][j] == '1')
	{
		count++;
	}
	if (i - 1 >= 0 && j + 1 < COL && mine_map[i - 1][j + 1] == '1')
	{
		count++;
	}
	if (j - 1 >= 0 && mine_map[i][j - 1] == '1')
	{
		count++;
	}
	if (j + 1 < COL && mine_map[i][j + 1] == '1')
	{
		count++;
	}
	if (i + 1 < ROW && j - 1 >= 0 && mine_map[i + 1][j - 1] == '1')
	{
		count++;
	}
	if (i + 1 < ROW && mine_map[i + 1][j] == '1')
	{
		count++;
	}
	if (i + 1 < ROW && j + 1 < COL && mine_map[i + 1][j + 1] == '1')
	{
		count++;
	}
	//count 里面的值就已经是周围雷的个数了
	show_map[i][j] = count + '0';
}


 
void game()
{
	//1.创建两个二维数组
	char show_map[ROW][COL];
	char mine_map[ROW][COL];
	//2.对两个二维数组进行初始化
	Init(show_map, mine_map); 
	int blank_count = 0;
	while (1)
	{
		PrintMap(mine_map);//为了方便调试，临时打印mine_map
		printf("\n");

		//3.打印地图
		PrintMap(show_map);
		//4.让用户输入一组坐标
		printf("请输入坐标:>");
		int i = 0;
		int j = 0;
		scanf("%d %d", &i, &j);
		if (i < 0 || i >= ROW || j < 0 || j >= COL)
		{
			printf("输入有误，请重新输入！\n");
			continue;
		}
		if (show_map[i][j] != '*')
		{
			//这个位置已经被翻开
			printf("输入的位置已被翻开，请重新输入！\n");
			continue;
		}
		//5.判定是否踩雷
		if (mine_map[i][j] == '1')
		{
			//踩雷了，提示游戏结束
			PrintMap(mine_map);
			printf("游戏结束!\n");
			break;
		}
		blank_count++;
		//6.游戏是否胜利
		if (blank_count == ROW * COL - COUNT)
		{
			printf("恭喜你，扫雷成功!\n");
			break;
		}
		//7.更新地图，把当前位置变成一个数字
		UpdateShowMa(show_map, mine_map, i, j);
	}
}

int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		choice = menu();
		if (choice == 1)
		{
			game();
		}
		else if (choice == 0)
		{
			printf("goodbye!\n");
			break;
		}
		else
		{
			printf("输入有误，请重新输入！\n");
		}
	}

	system("pause");
	return 0;
}