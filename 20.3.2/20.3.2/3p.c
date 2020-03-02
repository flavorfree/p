#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void OneNum(unsigned int x)
{
	int num = 0;
	while (x)
	{
		if (x & 1 == 1)
		{
			num++;
		}
		 x = x >> 1;
	}
	printf("%d\n", num);
}

int main()
{
	unsigned int x;
	scanf("%d", &x);
	OneNum(x);

	system("pause");
	return 0;
}