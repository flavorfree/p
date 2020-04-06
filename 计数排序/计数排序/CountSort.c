#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void CountSort(int* a, int n)
{
	int max = a[0], min = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i]>max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	int range = max-min+1;
	int* tmp = (int*)malloc(sizeof(int)*range);
	memset(tmp, 0, sizeof(int)*range);
	//统计每个数出现的次数
	for (int i = 0; i < n; i++)
	{
		tmp[a[i] - min]++;
	}
	//根据次数进行排序
	int j = 0;
	for (int i = 0; i < range; i++)
	{
		while(tmp[i]--)
		{
			a[j++] = i+min;
		}
	}
	free(tmp);
}

int main()
{
	int a[] = { 3, 2, 3, 4, 1, 4, 1, 0, 5, 6 };
	CountSort(a, sizeof(a) / sizeof(int));
	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		printf("%d ", a[i]);
	}

	system("pause");
	return 0;
}