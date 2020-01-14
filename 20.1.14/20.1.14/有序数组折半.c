#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int halfSearch(int arr[], int size, int f)
{
	int left = 0;
	int right = size - 1;
	int mid;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] >f)
		{
			right = mid - 1;
		}
		else if (arr[mid] < f)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int main1()
{
	int arr[10] = { 1, 3, 4, 5, 7, 8, 9, 10, 13, 15};	
	printf("%d\n", halfSearch(arr, 10, 8));
	system("pause");
	return 0;
}