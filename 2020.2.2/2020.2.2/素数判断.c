#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int judge(int i)
{
	int tmp;
	tmp = sqrt(i);//sqrt取i的平方根
	for (int n = 2; n <= tmp; n++)
	{
		if (i % n == 0)
		{
			return 0;//合数
		}
	}
	return 1;//素数
}

int main()
{
	int i;
	int a;
	scanf("%d", &i);
	 printf("%d\n", judge(i));
	system("pause");
	return 0;
}