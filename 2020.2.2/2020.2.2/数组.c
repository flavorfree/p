#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void init(int arr[],int n,int input[])
{
	int i ;
	for (i = 0; i < n; i++)
	{
		arr[i] = input[i];
	}
}

void reverse(int arr[], int n)
{
	int i, j;
	int tmp;
	for (i = 0, j = n -1; i < j ; i++,j--)
	{
		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}
}

void empty(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}

void printlog(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main1()
{
	int arr[5] = { 0 };
	int input[100] = { 2, 5, 7, 9, 1, 4, 3, 8 };

	init(arr,5,input);
	printlog(arr, 5);

	reverse(arr, 5);
	printlog(arr, 5);

	empty(arr, 5);
	printlog(arr, 5);

	system("pause");
	return 0;
}