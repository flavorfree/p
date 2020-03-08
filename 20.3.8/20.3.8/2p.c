#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void FindMin(int a[],int n)
{
	int k;
	int n1=0;
	int min = a[n1];
	scanf("%d", &k);
	if (k <= n)
	{
		for (n1 = 1; n1 < k; n1++)
		{
			if (a[n1] < min)
			{
				min = a[n1];
			}
		}
	}
	else
	{
		printf("ÊäÈë´íÎó£¡");
	}
	printf("%d\n", min);
}

int main2()
{
	int a[] = { 5, 7, 9, 2, 5, 2, 1, 0, 6, 3 };
	int n = sizeof(a) / sizeof(a[0]);
	FindMin(a,n);

	system("pause");
	return 0;
}