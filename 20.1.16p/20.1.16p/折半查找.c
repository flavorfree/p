#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int halfSerous(int arr[],int n,int left,int right)
{
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;//左加右减
		}
		if (arr[mid] > n)
		{
			right = mid - 1;
		}
		if (arr[mid] == n)
		{
			return 1;
		}
	}
	return -1;
}

int main1()
{
	int arr[5] = { 0, 3, 6, 8, 9 };
	int n ;
	scanf("%d",&n);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = halfSerous(arr, n, left, right);
	if (ret ==1)
	{
		printf("找到了！\n");
	}
	else
	{
		printf("没有！\n");
	}
	system("pause");
	return 0;
}