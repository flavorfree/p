#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int MAX_Arry(int* arr, int sz)
{
	int MAX = arr[0];
	int sum = arr[0];
	int i = 1;
	if (arr == NULL || sz <= 1)
		return 0;
	for (i = 1; i < sz; i++)
	{
		if (sum < 0)
			sum = arr[i];
		else
		{
			sum += arr[i];
		}
		if(sum > MAX)
			MAX = sum;
	}
	return MAX;
}
int main()
{
	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", MAX_Arry(arr, len));
	system("pause");
	return 0;
}