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
	printf("��ѡ��:>");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Init(char show_map[ROW][COL], char mine_map[ROW][COL])
{
	//1.show_map ȫ����ʼ��Ϊ *
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			show_map[i][j] = '*';
		}
	}
	//2.mine_map��ʼ��
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			mine_map[i][j] = '0';
		}
	}
	//3.�������10��λ����Ϊ����
	int mine_count = COUNT;
	while (mine_count > 0)
	{
		//�����������
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
	//1.�ȴ�ӡ��һ�У����꣩
	printf("   |");
	for (int j = 0; j < COL; j++)
	{
		printf(" %d", j);
	}
	printf("\n");
	//2.��ӡһ�зָ���
	for (int j = 0; j < COL; j++)
	{
		printf("---");
	}
	printf("\n");
	//3.����ÿ�����ֱ��ӡ
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
	//�ж���ǰλ�ã�i��j��,��Χ8�������м�����
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
	//count �����ֵ���Ѿ�����Χ�׵ĸ�����
	show_map[i][j] = count + '0';
}


 
void game()
{
	//1.����������ά����
	char show_map[ROW][COL];
	char mine_map[ROW][COL];
	//2.��������ά������г�ʼ��
	Init(show_map, mine_map); 
	int blank_count = 0;
	while (1)
	{
		PrintMap(mine_map);//Ϊ�˷�����ԣ���ʱ��ӡmine_map
		printf("\n");

		//3.��ӡ��ͼ
		PrintMap(show_map);
		//4.���û�����һ������
		printf("����������:>");
		int i = 0;
		int j = 0;
		scanf("%d %d", &i, &j);
		if (i < 0 || i >= ROW || j < 0 || j >= COL)
		{
			printf("�����������������룡\n");
			continue;
		}
		if (show_map[i][j] != '*')
		{
			//���λ���Ѿ�������
			printf("�����λ���ѱ����������������룡\n");
			continue;
		}
		//5.�ж��Ƿ����
		if (mine_map[i][j] == '1')
		{
			//�����ˣ���ʾ��Ϸ����
			PrintMap(mine_map);
			printf("��Ϸ����!\n");
			break;
		}
		blank_count++;
		//6.��Ϸ�Ƿ�ʤ��
		if (blank_count == ROW * COL - COUNT)
		{
			printf("��ϲ�㣬ɨ�׳ɹ�!\n");
			break;
		}
		//7.���µ�ͼ���ѵ�ǰλ�ñ��һ������
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
			printf("�����������������룡\n");
		}
	}

	system("pause");
	return 0;
}